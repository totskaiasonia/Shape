#pragma once
#include<iostream>
class C_Figure
{
protected:
	C_Figure();
	C_Figure(float pos_x, float pos_y, float square, char name);

	float pos_x;
	float pos_y;
	float square;
	char name;
public:
	virtual void save();
	virtual void load();

	friend std::ostream& operator <<(std::ostream& out, const C_Figure& figure)
	{
		out << "Name: " << figure.name << "\tPosition: (" << figure.pos_x << ";" << figure.pos_y << ")\tSquare: " << figure.square;
		return out;
	}
};