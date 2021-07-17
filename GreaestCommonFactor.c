#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <Windows.h>

int func1(int a, int b)
{
	int c = 0;
	if (a == b)
		return a;

	c = a - b;
	if (c == b)
		return c;
	else if (c > b)
		func1(c, b);
	else
		func1(b, c);

}

int func2(int a, int b)
{
	int c = 0;
	while (c = a % b)
	{
		a = b;
		b = c;
	}
	return b;
}

int main()
{
	int x = 0, y = 0;
	int factor = 0;

	printf("Please input two digitals:>");
	scanf("%d%d", &x, &y);
	
	if (x > y)
	{
		//factor = func1(x, y);
		factor = func2(x, y);
	}
	else
	{
		//factor = func1(y, x);
		factor = func2(y, x);
	}

	printf("The greatest common divisor between this two digitals is:%d\n", factor);
	system("pause");

	return 0;
}