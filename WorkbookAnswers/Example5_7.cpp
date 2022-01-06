#include <iostream> 
using namespace std;


int main()

{
	//입력이 0이 될때까지 계속 데이터를 읽음
	int sum = 0;
	int data = 0;

	do {
		sum += data;
		//다음 데이터 읽기
		cout << "Enter an integer (the input ends " << "if it is 0): ";
		cin >> data;

	} while (data != 0);

	cout << "The sum is " << sum << endl;

	return 0;
}