#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

float rand_FloatRange(float a, float b) {
	return ((b - a)*((float)rand() / RAND_MAX)) + a;
}

int main()
{
	// ���簢������ ������ ��ǥ�� ����
	//���δ� -50�� 50������ ���Ǽ��� ��¹����� �ǰ�
	//���δ� -100�� 100������ ���Ǽ��� ��¹����� �ȴ�.
	srand(time(0));
	int number1 = rand_FloatRange(-50, 50);
	int number2 = rand_FloatRange(-100, 100);
	//�̷��� ���� ������ �� �Լ��� ���� �Ʒ��� �ƴ϶� ���� �ξ�� �Ѵٴ� �� ���������!!!!
	//������ �ؼ�!!!!!

	cout << "( " << number1 << ", " << number2 << " )";
	return 0;
}