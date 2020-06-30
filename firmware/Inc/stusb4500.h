#define RDO_REG_STATUS 0x91

typedef union {
  uint32_t d32;
  struct {
    uint32_t MaxCurrent                     :       10; //Bits 9..0
    uint32_t OperatingCurrent               :       10;
    uint8_t reserved_22_20                  :       3;
    uint8_t UnchunkedMess_sup               :       1;
    uint8_t UsbSuspend                      :       1;
    uint8_t UsbComCap                       :       1;
    uint8_t CapaMismatch                    :       1;
    uint8_t GiveBack                        :       1;
    uint8_t Object_Pos                      :       3; //Bits 30..28 (3-bit)
    uint8_t reserved_31		                  :       1; //Bits 31
  } b;
} STUSB_GEN1S_RDO_REG_STATUS_RegTypeDef;

#define DPM_PDO_NUMB 0x70
#define DPM_SNK_PDO1 0x85

typedef union {
  uint32_t d32;
  struct {
    uint32_t Operationnal_Current :10;
    uint32_t Voltage :10;
    uint8_t Reserved_22_20  :3;
    uint8_t Fast_Role_Req_cur : 2;  /* must be set to 0 in 2.0*/
    uint8_t Dual_Role_Data    :1;
    uint8_t USB_Communications_Capable :1;
    uint8_t Unconstrained_Power :1;
    uint8_t Higher_Capability :1;
    uint8_t Dual_Role_Power :1;
    uint8_t Fixed_Supply :2;
  } fix;

  struct {
    uint32_t Operating_Current :10;
    uint32_t Min_Voltage:10;
    uint32_t Max_Voltage:10;
    uint8_t VariableSupply:2;
  } var;

  struct {
    uint32_t Operating_Power :10;
    uint32_t Min_Voltage:10;
    uint32_t Max_Voltage:10;
    uint8_t Battery:2;
  } bat;

} USB_PD_SNK_PDO_TypeDef;
