#include <stdio.h>
// #include <stdlib.h>

int main()
{
	int num = 0, word = 0;
	char ch;
	// char ch = getchar();为什么定义在这里不行
	while ((ch = getchar()) != '\n')//为什么是'\n'而不是'\0'
	{
		if (ch == ' ')
			word = 0;
		else if (word == 0)
		{
			word = 1;
			num++;
		}
	}
	printf("Word num:%d", num);//统计英文单词书数即统计空格数+1
	return 0;
}