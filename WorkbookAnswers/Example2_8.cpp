#include <iostream>
using namespace std;

int main()
{
	//ȭ�� �� �Է�
	double fahrenheit;
	cout << "Enter a degree in Farenheit: ";
	cin >> fahrenheit;
	//���� �� ���ϱ�

	double celsius = (5.0 / 9)* (fahrenheit - 32);
	//��� ȭ�� ���
	cout << "Fahrenheit " << fahrenheit << " is " << celsius << " in Celsius" << endl;


	return 0;

}