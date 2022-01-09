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

			cout << " "; //처음 공백을 만들어주고 그 띄어쓰기가 점점 줄어들게 설정

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