#include<stdio.h>

int Search(int a[],int l,int x)
{
	// for (int i = 0; i < l; i++)//++i和i++的区别
	for (int i = 1; i <= l; ++i)
	{
		if (a[i] == x)//==
			return i;
	}
    return 0;
}

int main()
{
	int num[] = { 49,38,65,97,76,13,27,49 };
	int len = sizeof(num) / sizeof(*num);
	int i = Search(num, len, 49);
	printf("%d", i+1);
	return 0;
}