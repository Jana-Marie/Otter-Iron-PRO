#ifndef __USBD_CDC_IF_H
#define __USBD_CDC_IF_H

#include "usbd_cdc.h"

#define APP_RX_DATA_SIZE  512
#define APP_TX_DATA_SIZE  512

#define CDC_POLLING_INTERVAL             10 /* in ms. The max is 65 and the min is 1 */

extern USBD_CDC_ItfTypeDef  USBD_CDC_fops;

#endif
