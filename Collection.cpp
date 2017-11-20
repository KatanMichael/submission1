#include "Collection.h"
#include "Circle.h"
#include "point.h"
#include <iostream>
using namespace std;

Collection::Collection(int radius,int width,int height,int color)
{
	int x=0;
	count=width*height;
    circles=new Circle*[count];
		for(int i=0;i<height;i++)
		{
			for(int j=0;j<width;j++)
			{
				circles[x]=new Circle(2*j*radius,2*i*radius,radius,color);
				x++;
			
			}
		
		}
}

Collection ::~Collection()
{
	for(int i=0;i<count;i++)
	{
		delete circles[i];
	}
	delete circles;
}

void Collection::print()const
{
	for(int i=0 ;i<count;i++)
	{
		circles[i]->print();   //circles[i][0].print();
	}
}

Circle& Collection:: getCircleAt(const Point &p)
{
	for(int i=0 ;i<count;i++)
	{
		if(circles[i]->contains(p))    //if(circles[i][0].contains(p))
		{
			return *(circles[i]);     //return circles[i][0];
		}
	}

}
