#include <REGX52.H>

//brief ���ڳ�ʼ��
//param ��
//retval ��

void UART_Init()
{
	SCON=0X40;
	PCON &= 0x7F;		//�����ʲ�����
	TMOD&=0X0F;     //
	TMOD|=0X20;
	TL1 = 0xFA;		//�趨��ʱ��ֵ
	TH1 = 0xFA;		//�趨��ʱ����װֵ
	ET1=0;
	TR1=1;
}

//brief ���ڷ���һ���ֽ�
//param ByteҪ���͵�һ���ֽ�����
//retval ��

void UART_SendByte(unsigned char Byte)
{
	 SBUF=Byte;
   while(TI==0);
		 TI=0;
}