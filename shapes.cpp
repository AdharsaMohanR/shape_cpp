#include <iostream>
#include<cmath>
#include"shape.h"
#include"polygon.h"
#include"circle.h"
#include"rectangle.h"
#include"triangle.h"

using namespace std;

Polygon::Polygon(int n):m_sides{n}{}

Rectangle::Rectangle(int l,int b):Polygon(4),length{l},breadth{b}{}

double Rectangle::area()
{
    cout<<length*breadth<<endl;
    return length*breadth;
}

double Rectangle::circum()
{
    cout<<<<2*(length+breadth)<<endl;
    return 2*(length+breadth);
}


Triangle::Triangle(int x,int y,int z):Polygon(3),a{x},b{y},c{z}{}


double Triangle::area()
{
    int p=(a+b+c)/2;
    cout<<"Area="<<sqrt(p*(a)*(b)*(c))<<endl;
    return sqrt(p*(a)*(b)*(c));
}

double Triangle::circum()
{
    cout<<a+b+c<<endl;
    return a+b+c;
}


Circle::Circle(double r):radius{r}{}

double Circle::area()
{

    cout<<"Area="<<PI*radius*radius<<endl;
    return PI*radius*radius;
}

double Circle::circum()
{
    cout<<2*PI*radius<<endl;
    return 2*PI*radius;
}


