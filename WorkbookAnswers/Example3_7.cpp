#include <iostream>
using namespace std;

int main()
{
	//사용자에게 파운드로 몸무게를 입력하도록 함
	cout << "Enter weight in pounds: ";
	double weight;
	cin >> weight;

	//사용자에게 인치로 키를 입력하도록 함
	cout << "Enter the height in inches: ";
	double height;
	cin >> height;

	const double KILOGRAMS_PER_POUND = 0.45359237; //상수
	const double METERS_PER_INCH = 0.0254; //상수

	//BMI지수
	double weightInKilograms = weight * KILOGRAMS_PER_POUND;
	double heightInMeters = height * METERS_PER_INCH;
	double bmi = weightInKilograms / (heightInMeters * heightInMeters);

	//결과화면 출력
	cout << "BMI is " << bmi << endl;
	if (bmi < 18.5)
		cout << "Underweight" << endl;
	else if (bmi < 25)
		cout << "Normal" << endl;
	else if (bmi < 30)
		cout << "Overweight" << endl;
	else
		cout << "Obese" << endl;

	return 0;
}