#include "Collection.h"
#include "Circle.h"
#include "point.h"
#include <iostream>
using namespace std;

Collection::Collection(int radius,int width,int height,int color)
{
	count=width*height;
    circles=new Circle*[height];
	for(int i=0;i<height;i++)
	{
		circles[i]=new Circle [width];
		for(int j=0;j<width;j++)
		{
			circles[i]=new Circle(j,i+1,radius,color);
		}
	}
}

Collection ::~Collection()
{
}

void Collection::print()const
{
	cout<<count<<endl;
	for(int i=0 ;i<sizeof(circles);i++)
		for(int j=0;j<sizeof(circles[i]);j++)
		{
			circles[i]->print();
		}
}
