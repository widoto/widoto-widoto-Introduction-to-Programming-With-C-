#include <iostream> 
#include <iomanip>
using namespace std;


int main()
{
	const int NUMBER_OF_PRIMES = 50; //표시할 소수의 수
	const int NUMBER_OF_PRIMES_PER_LINE = 10; //줄당10개 표시
	int count = 0; //소수의 수 계산
	int number = 2; //소수인지 검사할 수

	cout << "The first 50prime numbers are \n";

	//반복적인 소수검사
	while (count < NUMBER_OF_PRIMES)
	{
		//수가 소수라고 가정
		bool isPrime = true; //현재 숫자가 소수인가?

		//수가 소수인지 검사
		for (int divisor = 2; divisor <= number / 2; divisor++)
		{
			if (number%divisor == 0)
			{
				//참이라면 수는 소수가 아님
				isPrime = false; //isPrime을 거짓으로 설정
				break; //for 루프 빠져나가기
			}
		}

		//소수 출력하고 count증가
		if (isPrime)
		{
			count++;//count 증가
			if (count%NUMBER_OF_PRIMES_PER_LINE == 0)
				//수를 출력하고 새로운 줄로 이동
				cout << setw(4) << number << endl;
			else
				cout << setw(4) << number;

		}
		//다음수가 소수인지 검사
		number++;
	}
	return 0;
}