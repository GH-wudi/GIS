#include<stdio.h>

int main()
{
	printf("Please enter number:");
	int num;
	scanf("%d", &num);
	if (num % 3 == 0 && num % 5 == 0)
		printf("yes");
	else
		printf("no");
	return 0;
}