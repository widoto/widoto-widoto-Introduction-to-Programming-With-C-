#include <iostream> 
#include <cmath>
using namespace std;


int main()
{
	//세점 입력
	cout << "Enter three points: ";
	double x1, x2, x3, y1, y2, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	//세변 계산
	double a = sqrt((x2 - x3)*(x2 - x3) + (y2 - y3)*(y2 - y3));
	double b = sqrt((x1 - x3)*(x1 - x3) + (y1 - y3)*(y1 - y3));
	double c = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));

	//라디안 단위로 세 각 계산
	double A = acos((a*a - b * b - c * c) / (-2 * b*c));
	double B = acos((b*b - a * a - c * c) / (-2 * a*c));
	double C = acos((c*c - b * b - a * a) / (-2 * b*a));

	//도 단위로 각도 화면 표시
	const double PI = 3.14159;
	cout << "The three angles are " << A * 180 / PI << " " << B * 180 / PI << " " << C * 180 / PI << endl;


	return 0;
}