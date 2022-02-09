void delay(unsigned int ms)
{
	while(ms--)
	{
			unsigned char i, j;

		i = 2;
		j = 239;
		do
		{
			while (--j);
		} while (--i);
	}
	
}