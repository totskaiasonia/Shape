#include "C_Rectangle.h"
C_Rectangle::C_Rectangle() : C_Square()
{
	this->height = 0;
}
C_Rectangle::C_Rectangle(float pos_x, float pos_y, float square, char name, float side_length, float height) :
	C_Square(pos_x, pos_y, square, name, side_length)
{
	this->height = height;
}