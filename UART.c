#include <REGX52.H>

//brief 串口初始化
//param 无
//retval 无

void UART_Init()
{
	SCON=0X40;
	PCON &= 0x7F;		//波特率不倍速
	TMOD&=0X0F;     //
	TMOD|=0X20;
	TL1 = 0xFA;		//设定定时初值
	TH1 = 0xFA;		//设定定时器重装值
	ET1=0;
	TR1=1;
}

//brief 串口发送一个字节
//param Byte要发送的一个字节数据
//retval 无

void UART_SendByte(unsigned char Byte)
{
	 SBUF=Byte;
   while(TI==0);
		 TI=0;
}