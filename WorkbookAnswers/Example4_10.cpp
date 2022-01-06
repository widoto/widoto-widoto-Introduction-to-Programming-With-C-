#include <iostream> 
#include<fstream>
using namespace std;


int main()

{
	ifstream input;

	//파일 열기
	input.open("numbers.txt");
	int score1, score2, score3;

	//데이터 일기
	input >> score1;
	input >> score2;
	input >> score3;

	cout << "Total score is " << score1 + score2 + score3 << endl;

	//파일 닫기
	input.close();

	cout << "Done" << endl;
	return 0;


	return 0;
}