#include <iostream>
using namespace std;

class EvenNumber
{
public:
	int value;

	EvenNumber()
	{
		value = 0;
	}

	EvenNumber(int Nvalue)
	{
		value = Nvalue;
	}

	int getValue()
	{
		return value;
	}

	EvenNumber getNext()
	{
		EvenNumber en(value + 2);
		return en;
	}

	EvenNumber getPrevious()
	{
		EvenNumber en(value - 2);
		return en;
	}
};

int main()
{
	EvenNumber en(16);
	cout << "����: " << en.getPrevious().value << endl;
	cout << "����: " << en.getNext().value << endl;

}