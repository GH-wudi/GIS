/**
 * C 语言: 顺序表及其操作
 *
 * @author wfh
 * @date 2022/11/11
 */

#include <stdio.h>
 // #include <stdlib.h>
#define MAXSIZE 100

typedef struct SqStack
{
	int data[MAXSIZE];
	int top;
}SqStack;

void initStack(SqStack& st)
{
	st.top = -1;
}

int main()
{
	int num;
	// scanf("%d", num);
	printf("Hello, world!\n%d", num);
	return 0;
}