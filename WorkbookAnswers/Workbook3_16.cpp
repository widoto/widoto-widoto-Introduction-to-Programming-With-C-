#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	//�ﰢ���� �ѷ����
	int a;
	int b;
	int c;
	cout << "Enter the three length: ";
	cin >> a >> b >> c;

	if (a > b && a > c)
		if (a < b + c)
			cout << a + b + c;
		else
			cout << "��ȿ���� �ʽ��ϴ�.";

	if (b > c && b > a)
		if (b < a + c)
			cout << a + b + c;
		else
			cout << "��ȿ���� �ʽ��ϴ�.";

	if (c > a && c > b)
		if (c < b + a)
			cout << a + b + c;
		else
			cout << "��ȿ���� �ʽ��ϴ�.";

	return 0;
}