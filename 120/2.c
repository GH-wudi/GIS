#include<stdio.h>

int main()
{
	int max = 0;
	float a[9]={15, 57, 45, 4, 6, 79, 1, 23, 56};
	for (int i = 0; i < 9; i++)
	{
		if (max < a[i])
			max = a[i];
	}
	printf("max:%d", max);
	return 0;
}