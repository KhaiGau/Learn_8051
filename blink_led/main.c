#include <REGX52.H>

sbit LED_PIN = P0^0; //define LED_PIN

void delay(unsigned int t)
{
	unsigned int x , y;
	for(x=0;x<t;x++)
	{
		for(y=0;y<123;y++);//delay 1 ms
	}
}

void main()
{
	while(1)
	{
		LED_PIN = !LED_PIN;
		delay(1000);
	}
}
