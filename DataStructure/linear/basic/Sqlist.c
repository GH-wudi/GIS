/**
 * C ����: ˳��������
 *
 * @author wfh
 * @date 2022/11/11
 */

#include <stdio.h>
 // #include <stdlib.h>
#define MAXSIZE 100

typedef struct Sqlist
{
	int data[MAXSIZE];
	int length;
}Sqlist;

int main()
{
	int num;
	scanf("%d", num);
	printf("Hello, world!\n%d", num);
	return 0;
}
