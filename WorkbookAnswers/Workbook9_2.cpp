#include <iostream> 
using namespace std;


class Fan
{
public:
	int speed;
	bool on;
	double radius;

	Fan()
	{
		speed = 1;
		on = false;
		radius = 5;
	}

	Fan(int newSpeed, bool newOn, double newRadius)
	{
		speed = newSpeed;
		on = newOn;
		radius = newRadius;
	}

	int getSpeed()
	{
		return speed;
	}

	int getOn()
	{
		return on;
	}

	double getRadius()
	{
		return radius;
	}

	void setSpeed(int newSpeed)
	{
		speed = (newSpeed >= 0) ? newSpeed : 0;
	}

	void setOn(bool newOn)
	{
		on = (newOn == false) ? newOn : false;
	}

	void setRadius(double newRadius)
	{
		radius = (newRadius >= 0) ? newRadius : 0;
	}

};
int main()
{
	Fan fan1(3, true, 10);
	Fan fan2(2, false, 5);

	cout << "The speed of fan1 is " << fan1.getSpeed() << endl;
	cout << "The on of fan1 is " << fan1.getOn() << endl;
	cout << "The radius of fan1 is " << fan1.getRadius() << endl;

	cout << "The speed of fan2 is " << fan2.getSpeed() << endl;
	cout << "The on of fan2 is " << fan2.getOn() << endl;
	cout << "The radius of fan2 is " << fan2.getRadius() << endl;

}