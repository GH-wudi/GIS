#include<stdio.h>

void transposition(int a[][3], int b[][3], int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			b[j][i] = a[i][j];
		}
	}
}

void transposition2(int a[][3], int r, int c)//不开辟新空间进行数组转置
{
	int temp = 0;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			temp = a[j][i];
			a[i][j] = a[j][i];
			a[j][i] = temp;
		}
	}
}

void traverse(int a[][3], int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

int sumArr(int a[][3], int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		s += a[i][i];
	}
	return s;
}
int main()
{
	int a[][3] = { 1,2,3,4,5,6,7,8,10 };
	// int b[3][3];
	// transposition2(a, 3, 3);
	traverse(a, 3, 3);
	// traverse(b, 3, 3);
	printf("%d", sumArr(a, 3));
	return 0;
}