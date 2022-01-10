#include <iostream> 
#include <iomanip>
#include <ctime>
using namespace std;


int main()
{
	int num = 0;
	int maxnum = 0;
	int count = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> num;
		if (num > maxnum)
		{
			maxnum = num;
			count = 1;
		}
		else if (num == maxnum)
		{
			count += 1;
		}

	}

	cout << "제일 큰 수는 " << maxnum << "이고, " << count << "번 불렸다.";


	return 0;

}