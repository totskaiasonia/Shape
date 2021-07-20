#pragma once
#include "C_Figure.h"
class C_Circle final:
    public C_Figure
{
public:
    C_Circle();
    C_Circle(float pos_x, float pos_y, float square, char name, float radius);

    void save(FILE* to) override;
    void load(FILE* from) override;

    friend std::ostream& operator <<(std::ostream& out, const C_Circle& figure)
    {
        out << "Name: " << figure.name << "\tPosition: (" << figure.pos_x << ";" << figure.pos_y << ")\tSquare: " << figure.square << "\tRadius: " << figure.radius;
        return out;
    }
private:
    float radius;
};

