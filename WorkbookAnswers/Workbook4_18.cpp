#include <iostream> 
#include <cstdlib>
#include<algorithm>
using namespace std;


int main()
{
	cout << "Enter a starting character: ";
	char startChar;
	cin >> startChar;

	cout << "Enter an ending character: ";
	char endChar;
	cin >> endChar;
	string answer;

	//������ ���� ����
	char randomChar1 = static_cast<char>(startChar + rand() % (endChar - startChar + 1));
	answer += randomChar1;
	char randomChar2 = static_cast<char>(startChar + rand() % (endChar - startChar + 1));
	answer += randomChar2;
	char randomChar3 = static_cast<char>(startChar + rand() % (endChar - startChar + 1));
	answer += randomChar3;

	cout << "The random character between " << startChar << " and " << endChar << " is " << answer << endl;

	return 0;
}