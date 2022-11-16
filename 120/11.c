#include<stdio.h>
#include<math.h>

struct Triangle
{
	float a, b, c;
}t;

float GetArea(float d, float e, float f)
{
	float s = (d + e + f) / 2;
	float ar = sqrt(s * (s - d) * (s - e) * (s - f));
	return ar;
}

int main()
{
	printf("Enter 3 numbers:");
	scanf("%f %f %f", &t.a, &t.b, &t.c);//占位符要用%f而不是%d,否则是一个很大的负数，应该是乱码
	float area = GetArea(t.a, t.b, t.c);
	printf("area=%f", area);
}