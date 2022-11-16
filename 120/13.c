#include<stdio.h>

// void encoder(char c[])
// {
// 	for (int i = 0; i < sizeof(c) / sizeof(c[0]); i++)
// 	{
// 		c[i] = 4;
// 		printf("%c", c[i]);
// 	}
// }

void encoder(char c[], int length)
{
	for (int i = 0; i < length; c[i] += 4, i++);
	c[length] = '\0';
}

int main()
{
	char ch[] = { 'C','h','i','n','a' };
	encoder(ch, 5);
	puts(ch);
	return 0;
}