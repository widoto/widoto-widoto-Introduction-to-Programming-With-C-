#include <iostream> 
#include <iomanip>
using namespace std;


int main()
{
	const int NUMBER_OF_PRIMES = 50; //ǥ���� �Ҽ��� ��
	const int NUMBER_OF_PRIMES_PER_LINE = 10; //�ٴ�10�� ǥ��
	int count = 0; //�Ҽ��� �� ���
	int number = 2; //�Ҽ����� �˻��� ��

	cout << "The first 50prime numbers are \n";

	//�ݺ����� �Ҽ��˻�
	while (count < NUMBER_OF_PRIMES)
	{
		//���� �Ҽ���� ����
		bool isPrime = true; //���� ���ڰ� �Ҽ��ΰ�?

		//���� �Ҽ����� �˻�
		for (int divisor = 2; divisor <= number / 2; divisor++)
		{
			if (number%divisor == 0)
			{
				//���̶�� ���� �Ҽ��� �ƴ�
				isPrime = false; //isPrime�� �������� ����
				break; //for ���� ����������
			}
		}

		//�Ҽ� ����ϰ� count����
		if (isPrime)
		{
			count++;//count ����
			if (count%NUMBER_OF_PRIMES_PER_LINE == 0)
				//���� ����ϰ� ���ο� �ٷ� �̵�
				cout << setw(4) << number << endl;
			else
				cout << setw(4) << number;

		}
		//�������� �Ҽ����� �˻�
		number++;
	}
	return 0;
}