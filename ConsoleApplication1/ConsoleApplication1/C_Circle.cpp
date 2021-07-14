#include "C_Circle.h"
C_Circle::C_Circle() : C_Figure()
{
	this->radius = 0;
}
C_Circle::C_Circle(float pos_x, float pos_y, float square, char name, float radius) :
	C_Figure(pos_x, pos_y, square, name)
{
	this->radius = radius;
}