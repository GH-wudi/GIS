#include <stdio.h>
#include <Windows.h>
int main()
{
	int line = 0;  //上半部分行数
	scanf("%d", &line);
	for (int i = 0; i < line; i++)
	{
		for (int n = 0; n < line - 1 - i; n++)
		{
			printf(" ");
		}
		for (int j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int i = 0; i < line - 1; i++)
	{
		for (int n = 0; n < i + 1; n++)
		{
			printf(" ");
		}
		for (int j = 0; j < 2 * (line - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	// system("pause");
	return 0;
}