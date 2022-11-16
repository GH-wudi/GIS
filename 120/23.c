#include<stdio.h>

int main()
{
	float zi = 2, mu = 1, s = 0, temp = 0;
	for (int i = 0; i < 20; i++)
	{
		s += zi / mu;
		temp = zi; 
		zi = zi + mu;
		mu = temp;
	}
	printf("s=%f", s);
	return 0;
}