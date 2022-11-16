#include<stdio.h>

int leap(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		printf("%d\n", year);
	}	
}

int main()
{
	printf("Leap year:\n");
	for (int i = 2000; i <= 2500; i++)
	{
		leap(i);
	}
	//    for(int i=2000;i<=2500;i++)
	//    {
	//        if((i%4==0 && i%100!=0)||i%400==0)
	//        {
	//            printf("%d\n",i);
	//        }
	//    }
	//    return 0;
}