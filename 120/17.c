#include<stdio.h>
#include<math.h>

int IsPrime(int num)
{
	if (num == 2)
		printf("%d\n", num);
	else
	{
		int flag = 1;
		for (int i = 2; i <= sqrt(num); i++)
		{
			if (num % i == 0)
			{
				flag = 0;
				break;
			}
				
		}
		if (flag)
			printf("%d\n",num);
	}
}

void main()
{
	for (int i = 2; i <= 300; i++)
	{
		IsPrime(i);
	}
}