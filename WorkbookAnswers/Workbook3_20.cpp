#include <iostream>
#include<cmath>
using namespace std;
//�Ƹ� ����� �ؾ��ҵ� ������ ���̾�������....ABS�� ����
int main()
{
	cout << "Enter a point with two coordinates: : ";
	int a;
	int b;
	cin >> a >> b;
	if (a < 0)
		a = a * -1;
	if (b < 0)
		b = b * -1;
	if (a <= 5 && b <= 2.5)
		cout << "point ( " << a << ", " << b << " ) is in the rectangule.";
	else
		cout << "point ( " << a << ", " << b << " ) is not in the rectangule.";
	//�ٷ� �񱳽����� ���� �ʰ� ���̳ʽ� ���� ���ִ� �� Ī��!

	return 0;
}