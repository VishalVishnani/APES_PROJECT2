/**********************************************************************
*@Filename:apds9301.h
*
*@Description:This is a header file of library for APDS 9301 sensor
*@Author:Sai Raghavendra Sankrantipati, Vishal Vishnani
*@Date:13/12/2017
*@Usage : Connect APDS 9301 to I2C 2 and use any of the library function to read and write registers
 **********************************************************************/

#ifndef DRIVERS_APDS9301_H_
#define DRIVERS_APDS9301_H_

#include<stdint.h>
/* Slave address of APDS 9301*/
#define APDS9301_ADDRESS    0x39

/*Default Command value*/
#define COMMAND             0x80

/*Address of different registers*/
#define CONTROL_REG         0x00
#define TIMING_REG          0x01
#define ID_REG              0x0A
#define DATA0L_REG          0x0C
#define DATA0H_REG          0x0D
#define DATA1L_REG          0x0E
#define DATA1H_REG          0x0F

/*Different Power options*/
#define POWER_UP            0x03
#define SHUT_DOWN           0x00

/*Different timings in registers*/
#define TIME_13ms           0x00
#define TIME_101ms          0x01
#define TIME_402ms          0x02
#define MAX_GAIN            0x10

/*Enable or disable interrupts*/
#define INT_ENABLE          0x10
#define INT_DISABLE         0x00

uint8_t init_APDS9301(void);
uint8_t read_data0low(void);
uint8_t read_data0high(void);
uint8_t read_data1low(void);
uint8_t read_data1high(void);
uint8_t write_timereg(void);
float get_luminosity(void);
int write_reg(uint8_t reg, uint8_t value);
int read_reg(uint8_t reg);
#endif /* DRIVERS_APDS9301_H_ */
