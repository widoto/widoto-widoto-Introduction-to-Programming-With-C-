#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
	//sum �ʱ�ȭ
	double sum = 0;

	//sum�� 0.01,0.02,0.03.....0.99,1 ���ϱ�
	for (double i = 0.01; i <= 1.0; i = i + 0.01)
	{
		sum += i;
	}

	//��� ���
	cout << "The sum is " << sum << endl;

	return 0;

}