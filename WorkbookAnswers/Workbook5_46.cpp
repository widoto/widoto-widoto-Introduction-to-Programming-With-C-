#include <iostream> 
#include <string>
#include <cctype>

using namespace std;


int main()
{
	short num;
	cout << "������ �Է��� �ּ���: ";
	cin >> num;

	for (int i = 16; i >= 0; --i) {
		int result = num >> i & 1;
		cout << result;
	}

}