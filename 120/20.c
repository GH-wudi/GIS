#include<stdio.h>

float fact(int n)
{
	if (n == 1)
		return 1;
	else
		return fact(n - 1);
}
int main()
{
	float e = 1, n = 1;
	int i = 0;
	while (n > 1e-10)
	{
		i++;
		n = fact(i);
		e += 1.0 / fact(i);
	}
	// while (1 / n > 1e-10)
	// {
	// 	e += 1 / n;
	// 	i++;
	// 	n *= i;
	// }
	printf("s:%f", e);
	return 0;
}