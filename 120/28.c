#include<stdio.h>

int F(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	else
		return F(n - 1) + F(n - 2);
}

int R(int n)
{
	if (n == 1)
		return 1;
	else
		return 2 * R(n - 1);
}

int main()
{
	int num;
	scanf("%d", &num);
	printf("%d\n", R(num));
	return 0;
}