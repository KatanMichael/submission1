#ifndef CIRCLE_H
#define CIRCLE_H
#include "point.h"

class Circle
{
public:
Circle(int x=0, int y=0, int r=0, int color=0);     //difult constractor
int getColor() const;
void setColor(int color);
bool contains(const Point &p) const;
void print() const;
private:
const Point center;
int radius, color;
};

#endif