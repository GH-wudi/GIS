#include<stdio.h>

int num(int n)
{
	int i = n % 10;
	int j = n / 10 % 10;
	int k = n / 100;
	if (i * i * i + j * j * j + k * k * k == n)
		return 1;
	return 0;
}

int main()
{
	for (int i = 100; i < 1000; i++)
	{
		if (num(i))
			printf("%d\n", i);
	}
}