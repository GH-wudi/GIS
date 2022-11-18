#include<stdio.h>

int Search(int a[], int l, int x)
{
	// for (int i = 0; i < l; i++)//++i和i++的区别
	for (int i = 1; i <= l; ++i)
	{
		if (a[i] == x)//==
			return i;
	}
	return 0;
}

int BinarySearch(int a[], int l, int x)
{
	int low = 0, high = l - 1, mid;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (x == a[mid])
			return mid;
		if (x < a[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}
	return -1;
}

int main()
{
	// int num[] = { 49,38,65,97,76,13,27,49 };
	int num[] = { 13,27,38,49,49,65,76,97 };
	int len = sizeof(num) / sizeof(*num);
	while (1)
	{
		int x;
		scanf("%d", &x);
		if (x == -1)
			break;
		// int i = Search(num, len, 49);	
		int i = BinarySearch(num, len, x);
		printf("%d", i + 1);
	}

	return 0;
}