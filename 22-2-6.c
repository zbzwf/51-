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
	while(1)
	{
		if(P3_1==0)
		{
			delay(500);
			P2_0=~P2_0;
			while(P3_1==0);
			delay(500);
		}
	}
	
}