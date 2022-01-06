#include <iostream> 
#include<fstream>
using namespace std;


int main()

{
	ofstream output;

	//파일 생성
	output.open("numbers.txt");

	//숫자 쓰기
	output << 95 << " " << 56 << " " << 34;
	//파일 닫기
	output.close();

	cout << "Done" << endl;


	return 0;
}