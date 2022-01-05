#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	//가위바위보 게임
	srand(time(0));
	int number1 = rand() % 3;
	int number2;
	cout << "가위, 바위, 보! (가위:0, 바위:1, 보:2): ";
	cin >> number2;

	//4. 답을 확인하고 결과를 화면에 출력
	if (number1 == 0)
	{
		switch (number2)
		{
		case 0: cout << "The computer is rock. You are rock too. It is a draw.";
			break;

		case 1: cout << "The computer is rock. You are scissor. You lose.";
			break;

		case 2: cout << "The computer is rock. You are paper. You win.";
			break;
		}

	}

	else if (number1 == 1)
	{
		switch (number2)
		{
		case 0: cout << "The computer is scissor. You are rock.  You win. ";
			break;

		case 1: cout << "The computer is scissor. You are scissor too. It is a draw.";
			break;

		case 2: cout << "The computer is scissor. You are paper. You lose.";
			break;
		}
	}

	else
	{
		switch (number2)
		{
		case 0: cout << "The computer is paper. You are rock.  You lose. ";
			break;

		case 1: cout << "The computer is paper. You are scissor. You win.";
			break;

		case 2: cout << "The computer is paper. You are paper.  It is a draw.";
			break;
		}
	}


	return 0;
}