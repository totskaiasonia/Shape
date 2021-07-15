#pragma once
#include "C_Figure.h"
#include"C_Rectangle.h"
class C_Elipse final:
    public C_Figure
{
public:
    C_Elipse();
    C_Elipse(float pos_x, float pos_y, float square, char name, float height, float width);

    //void save(FILE* pf) override;

    friend std::ostream& operator <<(std::ostream& out, const C_Elipse& figure)
    {
        out << "Name: " << figure.name << "\tPosition: (" << figure.pos_x << ";" << figure.pos_y << ")\tSquare: " << figure.square << "\tHeight: " << figure.height << "\tWidth: " << figure.width;
        return out;
    }
private:
    float height;
    float width;
};

