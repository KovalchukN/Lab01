// calc.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int main()
{
	float a, b;
	printf("%s", "Enter a b:");
	scanf("%f %f", &a, &b);
	float y = a - b;
	float z = a + b;
	float c = a / b;
	float k = a * b;
	printf("minus %.1f\n", y);
	printf("Plus %.1f\n", z);
	printf("del %.1f\n", c);
	printf("Mnoj %.1f\n", k);
    return 0;
}

