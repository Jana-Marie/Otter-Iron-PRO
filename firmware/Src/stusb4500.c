HAL_StatusTypeDef read_register(uint8_t device, uint8_t reg, uint8_t *data, uint8_t len)
{
  return HAL_I2C_Mem_Read(&hi2c1, (device << 1), (uint16_t) reg, I2C_MEMADD_SIZE_8BIT, data, len, 10);
}

HAL_StatusTypeDef write_register(uint8_t device, uint8_t reg, uint8_t *data, uint8_t len)
{
  return HAL_I2C_Mem_Write(&hi2c1, (device << 1), (uint16_t) reg, I2C_MEMADD_SIZE_8BIT, data, len, 10);
}

void read_stusb_rdo(void) {
  HAL_StatusTypeDef ret;
  ret = read_register(0x28, RDO_REG_STATUS, (uint8_t *) &Nego_RDO, 4);

  if (ret == 0) {
    s.imax = (float) Nego_RDO.b.MaxCurrent / 100.0;
  } else {
    s.imax = 0.0;
  }
}
