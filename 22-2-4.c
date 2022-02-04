#include <REGX52.H>
void Delay1ms(int hao)		//@12.000MHz
{
	unsigned char i, j;
	while(hao)
	{
		i = 2;
	j = 239;
	do
	{
		while (--j);
	} while (--i);
	hao--;
	}//可以随便改时间
	
}

void main()
{
	while (1)
	{
		P2=0xFE;
		Delay1ms(1500);
		P2=0xFD;
		Delay1ms(1500);
		P2=0XFB;
		Delay1ms(1500);
		P2=0XF7;
		Delay1ms(1500);
		P2=0XEF;
		Delay1ms(1500);
		P2=0XDF;
		Delay1ms(1500);
		P2=0XBF;
		Delay1ms(1500);
		P2=0X7F;
		Delay1ms(1500);

	}
}