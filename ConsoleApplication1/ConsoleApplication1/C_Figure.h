#pragma once
#include<iostream>
class C_Figure
{
protected:
	C_Figure();
	C_Figure(int pos_x, int pos_y, float square, char name);

	int pos_x;
	int pos_y;
	float square;
	char name;
public:
	virtual void save(FILE* to);
	virtual void load(FILE* from);

	friend std::ostream& operator <<(std::ostream& out, const C_Figure& figure)
	{
		out << "Name: " << figure.name << "\tPosition: (" << figure.pos_x << ";" << figure.pos_y << ")\tSquare: " << figure.square;
		return out;
	}
	 
	virtual ~C_Figure();
};