// LAb1.3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <Windows.h> 
#include <string>
using namespace std;

int main()
{
	char count;
	double a, b;
	do
	{
		cout << "Enter num 1:";									// ввести число 1
		cin >> a;												// число 1 >> а
		cout << "Enter num 2:";									// ввести число 2
		cin >> b;												// число 2 >> b
		cout << "Select an action: +; -; *; /:" << endl; // выбор действия (происходит по выбору цифры, не знаю как сделать так, чтобы можно было вводить сам знак, а не число(Выползает error))
		cin >> count;
		// выбор подходящего кейса исходя из предыдущего комментария (1, 2, 3, 4)
		switch (count)
		{
		case '+':
		{
			cout << a << "+" << b << "=" << a + b << endl;
			break;
		}
		case '-':
		{
			cout << a << "-" << b << "=" << a - b << endl;
			break;
		}
		case '*':
		{
			cout << a << "*" << b << "=" << a * b << endl;
			break;
		}
		case '/':
		{
			cout << a << "/" << b << "=" << a / b << endl;
			break;
		}
		default:
			cout << "input error" << endl;							// на случай, если выбран неверный кейс 
		}
	} while (count, cout<<endl << "Again?" << endl);
																	// do, while(повторяет цикл после завершения предыдущего)
	return 0;
	
}
