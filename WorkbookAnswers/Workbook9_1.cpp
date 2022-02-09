#include <iostream> 
using namespace std;


class Rectangle
{
public:
	double width;
	double height;

	Rectangle()
	{
		width = 1;
		height = 1;
	}

	Rectangle(double newWidth, double newHeight)
	{
		width = newWidth;
		height = newHeight;
	}

	double getArea()
	{
		return width * height;
	}

	double getPerimeter()
	{
		return 2 * width + 2 * height;
	}

	double getWidth()
	{
		return width;
	}

	double getHeight()
	{
		return height;
	}

	void setWidth(double newWidth)
	{
		width = (newWidth >= 0) ? newWidth : 0;
	}

	void setPerimeter(double newHeight)
	{
		height = (newHeight >= 0) ? newHeight : 0;
	}
};
int main()
{
	Rectangle rectangle1(4, 40);
	Rectangle rectangle2(3.5, 35.9);

	cout << "The area of rectangle1 is " << rectangle1.getArea() << endl;
	cout << "The area of rectangle2 is " << rectangle2.getArea() << endl;
	cout << "The Perimeter of rectangle1 is " << rectangle1.getPerimeter() << endl;
	cout << "The Perimeter of rectangle2 is " << rectangle2.getPerimeter() << endl;
}