// Name.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int main()
{
	printf("%s", "Enter name:");
	char name[256] = "";
		scanf("%s", &name[0]);
    return 0;
}
