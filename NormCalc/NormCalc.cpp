// NormCalc.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <Windows.h>

using namespace std;

int main()
{
	int count;
	double a, b;
		cout << "Enter num1:";
	cin >> a;
	cout << "Enter num2:";
	cin >> b;
	cout << "What do you want MRAZ? +; -; *; /;";
	cin >> count;
	switch (count)
	{
	case +:
		cont << a << "+" << b << "=" << a + b << endl;
		break;
	case -:
		cont << a << "-" << b << "=" << a - b << endl;
		break;
	case *:
		cont << a << "*" << b << "=" << a * b << endl;
		break;
	case /:
		cont << a << "/" << b << "=" << a / b << endl;
		break;
	}
    return 0;
}

