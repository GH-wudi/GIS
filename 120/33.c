#include <stdio.h>
void Reverse(int a[], int n)
{
	int t = 0;
	for (int i = 0, j = n - 1; i < j; i++, j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}

void traverse(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}

int main()
{
	int num[] = { 1,2,4,4,5,6,5,8 };
	int l = 8;
	Reverse(num, l);
	traverse(num, l);
	return 0;
}