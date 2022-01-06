#include <iostream> 
using namespace std;


int main()
{
	cout << "Enter an integer (the input ends " << " if it is 0): ";
	int data;
	cin >> data;

	//입력이 0일때까지 데이터 읽기
	int sum = 0;
	while (data != 0)
	{
		sum += data;
		//다음 데이터 읽기
		cout << "Enter an integer ( the input ends " << "if it is 0): ";
		cin >> data;
	}

	cout << "The sum is " << sum << endl;

	return 0;
}