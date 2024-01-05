/* <hazinvogue> */

#ifndef INC_PORTBME_H_
#define INC_PORTBME_H_


#include "bme68x.h"


int8_t bme68x_interface_init(struct bme68x_dev *bme, uint8_t intf);

BME68X_INTF_RET_TYPE bme68x_i2c_read(uint8_t reg_addr, uint8_t *reg_data, uint32_t len, void *intf_ptr);

BME68X_INTF_RET_TYPE bme68x_i2c_write(uint8_t reg_addr, const uint8_t *reg_data, uint32_t len, void *intf_ptr);

void bme68x_delay_us(uint32_t period, void *intf_ptr);

void bme68x_check_rslt(const char api_name[], int8_t rslt);


#endif /* INC_PORTBME_H_ */
