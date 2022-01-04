//실린더의 면적과 용적 구하는 프로그램
#include <iostream>
using namespace std;

int main()
{
	double radius, length;
	cout << "Enter the radius and length of a cylinder: ";
	cin >> radius >> length;
	double area = radius * radius * 3.14;
	double volume = area * length;
	cout << "The area is " << area << endl;
	cout << " The volume is " << volume << endl;

	return 0;
}
//endl이 줄바꿈이구낭