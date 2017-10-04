#ifndef NRF5_HTU21D_LIB_H
#define NRF5_HTU21D_LIB_H

typedef enum htu21d_resolution
{
    HTU21D_RES_RH_12_TEMP_14 = 0x02,
    HTU21D_RES_RH_8_TEMP_12 = 0x03,
    HTU21D_RES_RH_10_TEMP_13 = 0x82,
    HTU21D_RES_RH_11_TEMP_11 = 0x83,
}htu21d_resolution_t;

ret_code_t htu21d_drv_begin(nrf_drv_twi_t * p_ext_twi);
ret_code_t htu21d_drv_convert_temp_hold();
ret_code_t htu21d_drv_convert_temp_no_hold();
ret_code_t htu21d_drv_convert_hum_hold();
ret_code_t htu21d_drv_convert_hum_no_hold();
ret_code_t htu21d_drv_set_resolution(htu21d_resolution_t res);
htu21d_resolution_t htu21d_drv_get_resolution();
ret_code_t htu21d_drv_soft_reset();
uint16_t htu21d_drv_get_temp_conversion_time();
uint16_t htu21d_drv_get_hum_conversion_time();

#endif // NRF5_HTU21D_LIB_H