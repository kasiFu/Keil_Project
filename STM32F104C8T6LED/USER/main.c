#include "led.h"//LED头文件声明
#include "sys.h"
#include "usart.h"
#include "timer.h"
 
/************************************************
 ALIENTEK战舰STM32开发板实验9
 PWM输出实验  
 技术支持：www.openedv.com
 淘宝店铺：http://eboard.taobao.com 
 关注微信公众平台微信号："正点原子"，免费获取STM32资料。
 广州市星翼电子科技有限公司  
 作者：正点原子 @ALIENTEK
************************************************/

int main(void)
{		
	
	LED_Init();						//LED函数初始化（LED函数在HARDWARE文件夹中）
	
	while(1)							//死循环，使得LED一直亮
	{
		LED0=1;					//LED0对应的单片机IO口在led.c与led.h文件中声明
	}

		
}
//任务：修改led.c与led.h文件中LED0的IO口，使得LED0能在PB6的端口下点亮。
 

