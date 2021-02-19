#pragma once
#include <sstream>
#include <string>
#include <iostream>
using namespace std;
class Point
{
private:
	double x;
	double y;
public:
	void Read();
	bool Init(int x, int y);
	void Display() const;
	void SetX(int value){ x = value; };
	void SetY(int value){ y = value; };
	double GetX() const { return x; };
	double GetY() const { return y; };
	void toPolar() const;
	string toString() const;
	void Distance() const { cout << "Відстань до початку координат (радіус): " << sqrt(x * x + y * y) << endl; };
	void isEqual() const;
};

