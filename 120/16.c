#include<stdio.h>
#include<math.h>

int IsPrime(int num)
{
	if (num == 2)
		printf("%d is prime", num);
	else
	{
		int flag = 1;
		for (int i = 2; i < num; i++)
		{
			if (num % i != 0)
            {
                flag = 0;
				break;
            }
			    
		}
		if (flag)
			printf("%d is prime",num);
		else
			printf("no");

	}
}

void main()
{
	int N;
	scanf("%d", &N);
	IsPrime(N);
}