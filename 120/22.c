#include<stdio.h>
#define  MAXSIZE  8

int insertElme(int a[],int *length,int p,int e)
{
	if (p<0 || p>*length || *length == MAXSIZE)
		return 0;
	for (int i = *length-1; i >= p; i--)
	{
		a[i + 1] = a[i];
	}
	a[p] = e;
	(*length)++;
	return 1;
}

void traverse(int a[],int length)
{
	printf("length:%d\n", length);
	for (int i = 0; i < length; i++)
	{
		printf("%d\n", a[i]);
	}
}

void main()
{
	int a[MAXSIZE] = { 3,4,5,7,8 };
	int L = 5;
	int num = 4;
	int index = 0;
	for (int i = 0; i < L; i++)
	{
		if (num < a[i])
			printf("%d\n",i);
			index = i-1;
			break;
	}
	printf("%d\n",index);
	int b=insertElme(a, &L, index, num);
	traverse(a, L);
}