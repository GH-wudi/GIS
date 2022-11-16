#include<stdio.h>

void toLower(char c)
{
	c= (c >= 'a' && c <= 'z') ? c : (c - 'A' + 'a');
	printf("Lowercase is %c\n", c);
}

void toCap(char c)
{
	c= (c >= 'A' && c <= 'Z') ? c : (c + 'A' - 'a');
	printf("Cap is %c\n", c);
}

int main()
{
	char ch;
	scanf("%c", &ch);
	toLower(ch);
	toCap(ch);
	return 0;
}