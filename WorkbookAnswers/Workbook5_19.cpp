#include <iostream> 
#include <iomanip>
#include <string>
using namespace std;


int main()
{
	int number;
	cout << "Enter the number : ";
	cin >> number;
	int h = number;

	for (int i = 1; i < number + 1; i++)
	{

		for (int t = 1; t <= h; t++) {

			cout << " "; //ó�� ������ ������ְ� �� ���Ⱑ ���� �پ��� ����

		}
		h += -1;
		int z = i;

		while (z != 0)
		{

			cout << z << " ";
			z -= 1;

		}

		z += -1;

		for (int j = 2; j <= i; j++)
		{
			cout << j << " ";

		}
		cout << endl;

	}
	return 0;
}