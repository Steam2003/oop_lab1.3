#include "Point.h"
void Point::Read()
{
	int a, b;
	cout << "¬вод≥ть числа в д≥апазон≥ [-100;100]" << endl;
	do {
		cout << "¬вед≥ть x: "; cin >> a;
		cout << "¬вед≥ть y: "; cin >> b;
	} while (!(Init(a, b)));
}
bool Point::Init(int first, int second)
{
	if (abs(first) <= 100 && abs(second) <= 100)
	{
		x = first;
		y = second;
		return true;
	}
	else
	{
		cout << "¬ведено помилкове значенн€, повтор≥ть спробу" << endl;
		return false;
	}
}
void Point::Display() const
{
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
}
void Point::toPolar() const
{
	const double PI = 3.141592653589793;
	double angle = (atan(y*1.0 / x)*180)/PI ;
	cout << "ѕол€рн≥ координати: " << angle << " градус≥в" << endl;
	Distance();
}
void Point::isEqual() const
{
	if (x == y)
		cout << "x р≥вне у" << endl;
	else
		cout << "x не р≥вне у" << endl;
}
string Point::toString() const
{
	stringstream sout; 
	sout << "x = " << x << endl; 
	sout << "y = " << y << endl;
	return sout.str(); 
}
