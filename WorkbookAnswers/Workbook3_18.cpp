#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	//1.�� ������ ���� �ڸ� ���� �߻�
	srand(time(0));
	int number1 = rand() % 100;
	int number2 = rand() % 100;
	int number3 = rand() % 100;
	//�̷��� ǥ���ϴ� �� �߿� �ð��� �ټ��ڸ����� ������...

		//3.�л����� "what is number1-number2?�� ���� �Է��ϵ��� ��û
	cout << "What is " << number1 << " + " << number2 << " + " << number3 << "? ";
	int answer;
	cin >> answer;

	//4. ���� Ȯ���ϰ� ����� ȭ�鿡 ���
	if (number1 + number2 + number3 == answer)
		cout << "You are correct!";
	else
		cout << "Your answer is wrong." << number1 << " + " << number2 << " + " << number3 << " should be " << (number1 + number2 + number3) << endl;

	return 0;
}