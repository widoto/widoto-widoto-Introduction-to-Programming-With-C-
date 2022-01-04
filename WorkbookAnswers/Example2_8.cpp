#include <iostream>
using namespace std;

int main()
{
	//화씨 값 입력
	double fahrenheit;
	cout << "Enter a degree in Farenheit: ";
	cin >> fahrenheit;
	//섭씨 값 구하기

	double celsius = (5.0 / 9)* (fahrenheit - 32);
	//결과 화면 출력
	cout << "Fahrenheit " << fahrenheit << " is " << celsius << " in Celsius" << endl;


	return 0;

}