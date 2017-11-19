#include"point.h"
#include "Circle.h"
#include "Collection.h"
#include<iostream>

using namespace std;


void main()
{
	Point test(0,0);
	test.print();
	Circle testing(0,0,3,4);
	Collection tess(2,3,5,9);
	testing.print();
	cout<<testing.contains(test)<<endl;
	tess.print();
	system("pause");
}