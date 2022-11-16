#include<stdio.h>

void main() 
{
	int N;
	int s = 1;
	scanf("%d", &N);
	if (N == 0)
	{
		printf("Result is %d", s);
	}
	else
	{
		for (int i = 1; i <=N; i++)
		{
			s = s*2;
		}
		printf("Result is %d", s);
	}
}