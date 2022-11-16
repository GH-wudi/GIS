#include<stdio.h>

typedef struct Point
{
	float x, y;
}P;

float getArea(P p1, P p2, P p3)
{
	float area = 0;
	area = p1.x * p2.y;
	return area;
}

void main()
{
	double d, f;
	scanf("%d %d", &d, &f);
	double e = Add(d, f);
	printf("%d", e);
}