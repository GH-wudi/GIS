#include<stdio.h>

int main()
{
	float s = 0,sign=1,temp=0;
	// float s = 0;
	// for (float i = 1; i < 100; i+=2)
	// {
	// 	s = s + (1.0 / i);
	// }
	// for (float i = 2; i <= 100; i+=2)
	// {
	// 	s = s - (1.0 / i);
	// }
	for (float i = 1; i <= 100; i++)
	{
		temp = sign * (1 / i);
		s = s + temp;
		sign = sign * (-1);
	}
	printf("%f", s);
}