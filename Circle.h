#ifndef CIRCLE_H
#define CIRCLE_H
#include "point.h"

class Circle
{
public:
Circle(int x, int y, int r, int color); 
~Circle();
int getColor() const;
void setColor(int color);
bool contains(const Point &p) const;
void print() const;
private:
const Point center;
int radius, color;
};

#endif