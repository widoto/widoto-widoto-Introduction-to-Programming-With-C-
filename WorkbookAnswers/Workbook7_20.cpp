#include <iostream> 
#include <ctime>
#include <string>
using namespace std;


bool strictlyEqual(const int list1[], const int list2[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (list1[i] != list2[i])
			return false;
	}
	return true;
}

int main()
{
	cout << "Enter list1: ";
	int number = 0;
	int list1[20]; //그래서 사이즈를 보내는구나,어디까지인지알수있게........
	string num1;
	getline(cin, num1);
	for (int i = 0; i < num1.length(); i++)
	{
		if (0 <= num1[i] - '0' && num1[i] - '0' <= 9)
		{
			list1[i] = num1[i] - '0';
			number += 1;
		}

	}


	cout << "Enter list2: ";
	int list2[20]; //그래서 사이즈를 보내는구나,어디까지인지알수있게........
	string num2;
	getline(cin, num2);
	for (int i = 0; i < num2.length(); i++)
	{
		if (0 <= num2[i] - '0' && num2[i] - '0' <= 9)
			list2[i] = num2[i] - '0';
	}

	if (strictlyEqual(list1, list2, number))
		cout << "Two lists are strictly identical";
	else
		cout << "Two lists are not strictly identical";

}