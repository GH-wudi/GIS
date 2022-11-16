#include<stdio.h>

void toLow(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		int x = 'A' - 'a';
		char lowChar = c - x;
		printf("%c", lowChar);
	}
	else
		printf("%c", c);
}

int main()
{
	char ch;
	scanf("%c", &ch);//字符占位符用%c
	toLow(ch);
	return 0;
}