#include "CircleWithConstantMemberFunctions.h"

int Circle::numberOfObjects = 0;

Circle::Circle()
{
	radius = 1;
	numberOfObjects++;
}

Circle::Circle(double newRadius)
{
	radius = newRadius;
	numberOfObjects++;
}

double Circle::getArea() const
{
	return radius * radius * 3.14159;
}

double Circle::getRadius() const
{
	return radius;
}

void Circle::setRadius(double newRadius)
{
	radius = (newRdius >= 0) ? newRadius : 0;
}

int Circle::getNumberOfObjects()
{
	return numberOfObjects;
}