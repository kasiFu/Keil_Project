#include "led.h"//LEDͷ�ļ�����
#include "sys.h"
#include "usart.h"
#include "timer.h"
 
/************************************************
 ALIENTEKս��STM32������ʵ��9
 PWM���ʵ��  
 ����֧�֣�www.openedv.com
 �Ա����̣�http://eboard.taobao.com 
 ��ע΢�Ź���ƽ̨΢�źţ�"����ԭ��"����ѻ�ȡSTM32���ϡ�
 ������������ӿƼ����޹�˾  
 ���ߣ�����ԭ�� @ALIENTEK
************************************************/

int main(void)
{		
	
	LED_Init();						//LED������ʼ����LED������HARDWARE�ļ����У�
	
	while(1)							//��ѭ����ʹ��LEDһֱ��
	{
		LED0=1;					//LED0��Ӧ�ĵ�Ƭ��IO����led.c��led.h�ļ�������
	}

		
}
//�����޸�led.c��led.h�ļ���LED0��IO�ڣ�ʹ��LED0����PB6�Ķ˿��µ�����
 

