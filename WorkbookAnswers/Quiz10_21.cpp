#include <iostream>
#include <string>
#include "BMI.h"
using namespace std;

int main()
{
	string name("Jone Doe");
	BMI bmi1(name, 18, 145, 70);
	name[0] = 'P';

	cout << "name from bmi1.getName() is " << bmi1.getName() << endl;
	cout << "name is " << name << endl;
}