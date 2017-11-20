#include <iostream>
#include "Circle.h"
#include"point.h"
#include <Math.h>

using namespace std;


Circle::Circle(int x,int y,int r ,int color):center(x,y),radius(r),color(color)
{
	cout<<"the circle ";
	this->center.print();
	cout<<"constance"<<endl;
}
Circle::~Circle()
{
	cout<<"the circle ";
	this->center.print();
	cout<<"destroyed"<<endl;
}
int Circle::getColor()const
{
	return this->color;
}

void Circle::setColor(int color)
{
	this->color=color;
}

bool Circle::contains(const Point &p)const
{
	int a,b;
	double R;
	a=pow(p.getX()-this->center.getX(),2.0);
	b=pow(p.getY()-this->center.getY(),2.0);
	R=pow(this->radius,2.0);
	if(R>(a+b))
		return true;
	else
	   return false;
}

void Circle::print()const
{
	cout<<"center=";
	center.print();
	cout<<" the radius is:"<<this->radius<<" the color is:"<<this->color<<endl;
}