///////////////////////////////////////////////////////
///// Vector2D.h
#pragma once
#include <string>

using namespace std;

class Vector2D
{
private:
	double x,y;
	
public:
	void setX(int value) { x = value; }
	void setY(int value) { y = value; }
	double getX() const { return x; }
	double getY() const { return y; }

	void Init(int x, int y);
	void Read();
	void Display();
	string toString() const; 

	void ScalVect(Vector2D g, Vector2D f);
	void Mult(Vector2D g, Vector2D f);
	void Lenght(Vector2D g, Vector2D f);
	bool Poriv(Vector2D g, Vector2D f);
};

