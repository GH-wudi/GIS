#include<stdio.h>

int fact(int n)
{
	if (n == 1)
		return 1;
	else
		return n * fact(n - 1);
}

void main()
{
	int s = 0;
	for (int i = 1; i < 11; i++)
	{
		s += fact(i);
	}
	printf("%d", s);
}