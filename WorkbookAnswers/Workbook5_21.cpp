#include <iostream> 
#include <iomanip>
using namespace std;


int main()
{
	int h = 7;
	int k = 0;

	for (int i = 0; i < 8; i++)
	{


		for (int t = 1; t <= h; t++) {

			cout << " "; //ó�� ������ ������ְ� �� ���Ⱑ ���� �پ��� ����

		}
		h += -1;

		for (int z = 0; z <= i; z++)
		{
			cout << pow(2, z) << " ";

		}

		if (i != 0)
		{
			for (int j = k; j >= 0; j--)
			{
				cout << pow(2, j) << " ";

			}

			k += 1;

		}
		cout << endl;

	}
	return 0;
}