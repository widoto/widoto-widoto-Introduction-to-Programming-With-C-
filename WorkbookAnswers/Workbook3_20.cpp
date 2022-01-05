#include <iostream>
#include<cmath>
using namespace std;
//아마 더블로 해야할듯 정수란 말이없었으니....ABS도 쓰고
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
	//바로 비교식으로 가지 않고 마이너스 먼저 없애는 거 칭찬!

	return 0;
}