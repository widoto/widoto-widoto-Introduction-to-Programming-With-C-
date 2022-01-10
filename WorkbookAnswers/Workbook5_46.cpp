#include <iostream> 
#include <string>
#include <cctype>

using namespace std;


int main()
{
	short num;
	cout << "정수를 입력해 주세요: ";
	cin >> num;

	for (int i = 16; i >= 0; --i) {
		int result = num >> i & 1;
		cout << result;
	}

}