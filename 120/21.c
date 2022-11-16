#include<stdio.h>
#include<math.h>

int isPrime(int n)
{
	if (n == 2)
		return 1;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return 0;
		// break; ???
	}
	return 1;
}

int isReverse(char c[], int n)
{
	for (int i = 0, j = n - 1; i < j; i++, j--)
	{
		if (c[i] != c[j])
			return 0;
	}
	return 1;
}

void main()
{
	char ch[] = { '1','2','2','1','5' };
	if (isReverse(ch, 5))
		printf("Yes");
	else
		printf("No");
	// for (int i = 2; i < 100; i++)
	// {
	// 	if (isPrime(i))
	// 		printf("%d\n", i);
	// }
}