#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

float rand_FloatRange(float a, float b) {
	return ((b - a)*((float)rand() / RAND_MAX)) + a;
}

int main()
{
	// 직사각형안의 임의의 좌표를 선택
	//가로는 -50과 50사이의 임의수를 출력받으면 되고
	//세로는 -100과 100사이의 임의수를 출력받으면 된다.
	srand(time(0));
	int number1 = rand_FloatRange(-50, 50);
	int number2 = rand_FloatRange(-100, 100);
	//이렇게 쓰고 싶으면 저 함수를 메인 아래가 아니라 위에 두어야 한다는 거 잊지말즈아!!!!
	//순차적 해석!!!!!

	cout << "( " << number1 << ", " << number2 << " )";
	return 0;
}