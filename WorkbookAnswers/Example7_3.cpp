#include <iostream> 
#include <ctime>
#include <string>
using namespace std;

int main()
{
	const int NUMBER_OF_CARDS = 52;
	int deck[NUMBER_OF_CARDS];

	string suits[] = { "Spades", "Hearts", "Diamonds", "Clubs" };
	string ranks[] = { "Ace", "2" ,"3", "4", "5", "6","7","8","9","10","Jack", "Queen" , "King" };

	for (int i = 0; i < NUMBER_OF_CARDS; i++)
		deck[i] = i;

	//ī�� ����
	srand(time(0));
	for (int i = 0; i < NUMBER_OF_CARDS; i++)
	{
		int index = rand() % NUMBER_OF_CARDS;
		int temp = deck[i];
		deck[i] = deck[index];
		deck[index] = temp;
	}

	for (int i = 0; i < 4; i++)
	{
		string suit = suits[deck[i] / 13];
		string rank = suits[deck[i] % 13];
		cout << "Card number " << deck[i] << " : " << rank << "of" << suit << endl;
	}
	return 0;

}