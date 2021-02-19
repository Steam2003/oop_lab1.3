#include <iostream>
#include <Windows.h>
#include "Point.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Point a;
	a.Read();
	a.toPolar();
	a.isEqual();
	cout << a.toString();
}