///////////////////////////////////////////////////////
///// Vector2D.cpp
#include "Vector2D.h"
#include<iostream>
#include <string>
#include <sstream>

using namespace std;

void Vector2D::Init(int x, int y)
{
	setX(x);
	setY(y);
}
void Vector2D::Read()
{
	int x, y;
	
	cout << "x= " ; cin >> x;
	cout << "y= " ; cin >> y;

	Init(x, y);
}
void Vector2D::Display()
{
	cout << "x= " << x << "\ty= " << y << endl;
}
string Vector2D::toString() const
{
	stringstream sout;
	sout <<"x = "<< x <<"\ty = "<< y;
	return sout.str();
}

void Vector2D::ScalVect(Vector2D g, Vector2D f)
{
	Vector2D t;
	t.x = g.x * f.x + g.y * f.y;
	cout<<"Skalyar dobutok: " << t.x << endl;
}
 void Vector2D:: Mult(Vector2D g, Vector2D f)
{
	Vector2D a, b;
	int q;
	cout << "Vvedit chislo: "; cin >> q;
	a.x = q * g.x;
	a.y = q * g.y;
	b.x = q * f.x;
	b.y = q * f.y;
	cout << "Vector A:  x= " << a.x << "\ty= " << a.y << endl;
	cout << "Vector B:  x= " << b.x << "\ty= " << b.y << endl;
}
void Vector2D::Lenght(Vector2D g, Vector2D f)
{
	Vector2D a, b;
	a.x = sqrt((g.x * g.x) + (g.y * g.y));
	b.x = sqrt((f.x * f.x) + (f.y * f.y));
	cout << "Vector A= " << a.x<< endl;
	cout << "Vector B= " << b.x << endl<<endl;
	Poriv(a, b);
}
bool Vector2D::Poriv(Vector2D a, Vector2D b)
{
	if (a.x > b.x)
	{
		cout << "Vector A > Vector B" << endl << endl;
		return true;
	}
	if (a.x < b.x)
	{
		cout << "Vector A < Vector B" << endl << endl;
		return true;
	}
	if (a.x == b.x)
	{
		cout << "Vector A = Vector B" << endl << endl;
		return true;
	}
	else
		return false;
}