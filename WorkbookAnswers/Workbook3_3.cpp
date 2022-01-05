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
#이게 틀린이유!!!!!!!!!!!!!!!!!!!!!!!!
#정의를 먼저 해놓아서 판펼 변수에 영이 있게 되는 거임....

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
#####double 끼리 나누어도 딱 떨어지는 건 소수점이 안남는 것 같다.

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
	//이리 하면 안되지. 입력값이 정수였어서 망정이지 실수였어봐 이거 안될걸
	//그거 abs 써줘야 한다.

	else
		//얘도 안됨.cout << "x is " << static_cast<int>(x*10)/10 << " and y is" << static_cast<int>(y*10)/10;
		cout << "x is " << fixed << setprecision(1) << x << " and y is " << fixed << setprecision(1) << y;


	return 0;
}