#include <iostream> 
#include<cmath>
#include<cctype>
#include <string>
using namespace std;


int main()

{
	char a;
	cout << "Enter a decimal value(0 t0 15): ";
	cin >> a;
	if ((a >= 0) && (a <= 9))
	{
		//�׳� ������ ����� ���
		cout << "aha";
	}

	else if ((a - 65 >= 0) && (a - 65 <= 5))
	{
		double i = a + 0;//�̷��� ���ڷ� �ٲ����
//�� ������ ����� ���
		cout << "i is " << i;
	}

	else
		cout << a << " is an invalid input.";


}