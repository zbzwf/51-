#include <REGX52.H>
void delay(unsigned int ms)
{
	unsigned char i, j;
  while(ms)
	{
			i = 2;
		j = 239;
		do
		{
			while (--j);
		} while (--i);
		ms--;
	}
	
}

void main()
{
	unsigned int lednum=0;
	while(1)
	{
		if(P3_1==0)
		{
			delay(20);
			while(P3_1==0);
			delay(20);
			lednum++;
			P2=~lednum;
		}
	}
}