#ifndef __iic_H
#define __iic_H

#include "bsp_tim.h"								


typedef struct
{
	GPIO_TypeDef*  SDA_GPIO;
	uint32_t       SDA_PIN;
	GPIO_TypeDef*  SCL_GPIO;
	uint32_t       SCL_PIN;
}IIC_HandleTypeDef;





/*user部分*/

/*IIC驱动核心代码*/
void IIC_Init(IIC_HandleTypeDef* iic);
void SDA_Out(IIC_HandleTypeDef* iic);
void SDA_In(IIC_HandleTypeDef* iic);
void IIC_Start(IIC_HandleTypeDef* iic);
void IIC_Stop(IIC_HandleTypeDef* iic);
void IIC_writeByte(IIC_HandleTypeDef* iic,uint8_t data);
uint8_t IIC_readByte(IIC_HandleTypeDef* iic);
uint8_t IIC_waitAck(IIC_HandleTypeDef* iic);
void IIC_ack(IIC_HandleTypeDef* iic,uint8_t ack);
/*不允许更改*/

#endif 
