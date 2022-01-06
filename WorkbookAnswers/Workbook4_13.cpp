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
		//그냥 이진수 만들어 출력
		cout << "aha";
	}

	else if ((a - 65 >= 0) && (a - 65 <= 5))
	{
		double i = a + 0;//이래야 숫자로 바뀌어짐
//또 이진수 만들어 출력
		cout << "i is " << i;
	}

	else
		cout << a << " is an invalid input.";


}