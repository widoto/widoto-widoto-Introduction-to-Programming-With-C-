#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	//���� ���߱����
	srand(time(0));
	int number1 = rand() % 2;
	int number2;
	cout << "�ո��ϱ�, �޸��ϱ�? �ո��� 0, �޸��� 1: ";
	cin >> number2;

	//4. ���� Ȯ���ϰ� ����� ȭ�鿡 ���
	if (number1 == number2)
		cout << "You are correct!";
	else
		cout << "��!";

	return 0;
}