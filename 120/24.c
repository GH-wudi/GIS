#include<stdio.h>

int findMax(int a[][4], int n, int m, int* row, int* col)//多维数组除了必须有范围（除了第一维）
{
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (max < a[i][j])
			{
				max = a[i][j];
				*row = i;
				*col = j;
			}
		}
	}
	return max;
}

int main()
{
	int a[3][4] = { 1,2,3,4,5,13,7,8,9,10,21,12 };
	int r = 0, c = 0;
	int m = findMax(a, 3, 4, &r, &c);
	printf("max=%d\n(%d,%d)", m, r, c);
	return 0;
}