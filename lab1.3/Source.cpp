///////////////////////////////////////////////////////
///// Source.cpp
#include "Vector2D.h"
#include<iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	Vector2D g,f;
	
	cout << "Vector A:" <<endl;
	g.Read();
	cout << endl;
	cout << "Vector B:" <<endl;
	f.Read();
	cout << endl;
	cout << "Vector A:" << endl;

	g.Display();
	cout << "Vector B:" << endl;

	f.Display();
	cout << endl;

	g.ScalVect(g,f);
	cout << endl;

	g.Mult(g,f);
	cout << endl;
	cout << "Lenght: " << endl;
	g.Lenght(g, f);

	cout << "ToString: " << endl;
	string s;
	s.assign(g.toString()); 
	cout << s << endl;
	s.assign(f.toString());
	cout << s << endl << endl;

	return 0;
}