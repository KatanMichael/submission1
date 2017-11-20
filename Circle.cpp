#include <iostream>
#include "Circle.h"
#include"point.h"

using namespace std;


Circle::Circle(int x,int y,int r ,int color):center(x,y),radius(r),color(color)
{
	/*cout<<"the circle ";                           //if you want follow after born object
	this->center.print();
	cout<<"constance"<<endl;*/
}
Circle::~Circle()
{
	/*cout<<"the circle ";                         //if you want follow after death object
	this->center.print();
	cout<<"destroyed"<<endl;*/
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
	int a,b,R;
	 
	a=p.getX()-this->center.getX();
	a=a*a;                                  //(x1-x2)^2
	b=p.getY()-this->center.getY();
	b=b*b;                                  //(y1-y2)^2
	R=this->radius*this->radius;           // rudius^2
	if(R>(a+b))                            //if( (radius^2 )  >  (  (x1-x2)^2+(y1-y2)^2  ) ~- if( radiud^2 > d^2 )
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