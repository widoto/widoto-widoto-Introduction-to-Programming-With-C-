/*
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a = 0;
	double b = 0;
	double c = 0;
	double d = 0;
	double e = 0;
	double f = 0;

	double panbael = a * d - b * c;

	cout << "Enter a, b, c, d, e, f: ";
	cin >> a >> b >> c >> d >> e >> f;

	double x = (e*d - b * f) / panbael;
	double y = (a*f - e * c) / panbael;

	if (panbael == 0)
		cout << "The equation has no solution";

	else
		cout << "x is " << x << "and y is" << y;

	return 0;
}
#�̰� Ʋ������!!!!!!!!!!!!!!!!!!!!!!!!
#���Ǹ� ���� �س��Ƽ� ���� ������ ���� �ְ� �Ǵ� ����....

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a;
	double b;
	double c;
	double d;
	double e;
	double f;

	cout << "Enter a, b, c, d, e, f: ";
	cin >> a >> b >> c >> d >> e >> f;

	double panbael = a * d - b * c;

	double x = (e*d - b * f) / panbael;
	double y = (a*f - e * c) / panbael;

	if (panbael == 0)
		cout << "The equation has no solution";

	else
		cout << "x is " << static_cast<float>(x) << " and y is" << static_cast<float>(y);
cout << "x is " << fixed<< setprecision(1) << x << " and y is" << fixed << setprecision(1) << y;

	return 0;
}
#####double ���� ����� �� �������� �� �Ҽ����� �ȳ��� �� ����.

*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double a;
	double b;
	double c;
	double d;
	double e;
	double f;

	cout << "Enter a, b, c, d, e, f: ";
	cin >> a >> b >> c >> d >> e >> f;

	double panbael = a * d - b * c;

	double x = (e*d - b * f) / panbael;
	double y = (a*f - e * c) / panbael;

	if (panbael == 0)
		cout << "The equation has no solution";
	//�̸� �ϸ� �ȵ���. �Է°��� ������� �������� �Ǽ������ �̰� �ȵɰ�
	//�װ� abs ����� �Ѵ�.

	else
		//�굵 �ȵ�.cout << "x is " << static_cast<int>(x*10)/10 << " and y is" << static_cast<int>(y*10)/10;
		cout << "x is " << fixed << setprecision(1) << x << " and y is " << fixed << setprecision(1) << y;


	return 0;
}