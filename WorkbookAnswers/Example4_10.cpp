#include <iostream> 
#include<fstream>
using namespace std;


int main()

{
	ifstream input;

	//���� ����
	input.open("numbers.txt");
	int score1, score2, score3;

	//������ �ϱ�
	input >> score1;
	input >> score2;
	input >> score3;

	cout << "Total score is " << score1 + score2 + score3 << endl;

	//���� �ݱ�
	input.close();

	cout << "Done" << endl;
	return 0;


	return 0;
}