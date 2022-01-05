#include <iostream>
#include<cmath>
#include<ctime>
#include<string>
using namespace std;



int main()
{
	string arr[] = { "Club", "Diamond", "Heart", "Spade" };
	string arr2[] = { "Ace", "2", "3","4","5","6","7","8","9","10","Jack","Queen","King" };

	int i, n;

	string nTmp;

	srand(time(NULL));

	for (i = 4 - 1; i >= 0; i--) {

		n = rand() % 4;
		nTmp = arr[i];
		arr[i] = arr[n];
		arr[n] = nTmp;
	}

	int j, e;

	string eTmp;

	srand(time(NULL));

	for (j = 13 - 1; j >= 0; j--) {

		e = rand() % 13;
		eTmp = arr2[j];
		arr2[j] = arr2[e];
		arr2[e] = eTmp;
	}


	cout << "The card you picked is " << arr[0] << " " << arr2[0];


	return 0;
}