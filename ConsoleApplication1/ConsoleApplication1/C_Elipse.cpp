#include "C_Elipse.h"
C_Elipse::C_Elipse() : C_Figure()
{
	this->height = this->width = 0;
}
C_Elipse::C_Elipse(float pos_x, float pos_y, float square, char name, float height, float width) :
	C_Figure(pos_x, pos_y, square, name)
{
	this->height = height;
	this->width = width;
}