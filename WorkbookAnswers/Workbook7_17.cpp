#include <iostream> 
#include <ctime>
#include <string>
using namespace std;


void makeSlots(int bslots, int balls)
{


	int slots[100]; //변수를 못넣으면 크기 모를때 어떡해야 해???////////질문1
	for (int i = 0; i < 100; i++)
		slots[i] = 0;
	//srand를 여기다 둬야 랜덤으로 계속 바뀐다.////////질문2
	srand(time(0));
	for (int k = 0; k < balls; k++)
	{
		//srand를 여기다 두면 안바뀐다.
		string left_right;
		char leri;

		for (int j = 0; j < bslots - 1; j++)
		{

			leri = rand() % 2;
			if (leri == 1)
				left_right += 'L';
			else
				left_right += 'R';
		}
		cout << left_right << endl;

		int score = 0;
		for (int z = 0; z < left_right.length(); z++)
		{
			if (left_right[z] == 'R')
				score += 1;
		}

		slots[score] += 1;
	}

	//슬롯에 있는것을 프린트
	for (int h = 0; h < bslots; h++)
		cout << slots[h] << " ";

}

int main()
{
	cout << "Enter the number of balls to drop: ";
	int balls;
	cin >> balls;
	cout << "Enter the number of slots in the bean machine: ";
	int bslots;
	cin >> bslots;
	makeSlots(bslots, balls);

}