#include <iostream> 
#include <string>
#include <ctime>
#include <algorithm>
using namespace std;


void employees(double m[][7])
{
	double em[8];

	for (int i = 0; i < 8; i++)
	{
		double sum = 0;
		for (int j = 0; j < 7; j++)
			sum += m[i][j];
		em[i] = sum;
	}

	//���� �������� ��

	double maxIndex;


	for (int z = 0; z < 8; z++)//�̰� Ƚ��
	{
		//const int SIZE = 8 - z;�̰� �� �ȵɱ�?///////////��������.
		//�ϴ� ��� ������ ������ �� �ּ� 0�ð� �ʰ��� ���Ѵٰ� ����.
		double mm[8] = { 0,0,0,0,0,0,0,0 };
		//�ִ븦 ���ϰ�
		double maxi = em[0];
		//for(int g=0;g<8-z;g++)
			//maxi = max(maxi,em[g]) �̰͵� �ȵǳ� ���ͽ�� �ϳ���

		//double maxi = max(em);�̷��Դ¾ȵǳ��� ������ ��ߵǳ���
		//int SIZE = em.length(); �̰� �� �� �ȵɱ�?? ��������
		for (int k = 0; k < 8; k++)
		{
			if (em[k] == maxi)
			{
				//�ε��� ã�Ƽ� cout
				for (int i = 0; i < 8 - z; i++)
					if (em[i] == maxi)
						cout << "Employee " << i << " workhour: " << maxi << endl;
			}
			else
				mm[k] = em[k];
		}

		for (int h = 0; h < 8 - z; h++)
			mm[h] = em[h];
	}


}
int main()
{
	cout << "Enter a 8-by-7 matrix rowby row: " << endl;
	double matrix[8][7];
	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 7; j++)
			cin >> matrix[i][j];

	employees(matrix);


}