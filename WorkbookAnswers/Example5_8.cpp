#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
	cout << "         Multiplication Table\n";

	//숫자 제목 표시
	cout << "   |   ";
	for (int j = 1; j <= 9; j++)
		cout << setw(3) << j;
	cout << "\n";
	cout << "------------------------------\n";

	//곱하기표내용
	for (int i = 1; i <= 9; i++)
	{
		cout << i << "  |  ";
		for (int j = 1; j <= 9; j++)
		{
			//곱한 결과를겅렬하여 화면에 출력
			cout << setw(3) << i * j;
		}
		cout << "\n";
	}
	return 0;

}