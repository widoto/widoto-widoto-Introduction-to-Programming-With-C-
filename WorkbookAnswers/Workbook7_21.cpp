#include <iostream> 
#include <string>
#include <ctime>
using namespace std;

//string cards_S_C_H_p[4]; //이게 01234인지 4개인지 뜻 정확히 알기 나중에 \ㅜ개수까지 생각해줘야 하는 경우도
	//알아놔야 함

int main()
{
	string means[13] = { 'Queen','1','2','3','4','5','6','7','8','9','10','11','12' };
	string names[4] = { 'Spades','Clubs','Hearts','picks' };
	int m_num = 1;
	int n_num = 1;
	string mm[4];
	string nn[4];
	int s = 0;
	srand(time(0));
	int m = rand() % 13;
	int n = rand() % 4;
	mm[0] = means[m];
	nn[0] = names[n];
	while (m_num != 4)
	{
		m = rand() % 13;
		n = rand() % 4;
		for (int i = 0; i < m_num; i++)
		{
			if (nn[i] == names[i])
				//만약 같으면
			{
				s += 1;
				break;
			}

			//더하지 말고 전체 횟수만 증가

			//다르면
			else
			{
				nn[n_num] = names[n];
				mm[m_num] = means[m];
				n_num += 1;
				m_num += 1;
				s += 1;
			}
			//더하고 각각의 횟수중가, 전체 횟수도 증가
		}
	}

	cout << nn[0] << " of " << mm[0] << endl;
	cout << nn[1] << " of " << mm[1] << endl;
	cout << nn[2] << " of " << mm[2] << endl;
	cout << nn[3] << " of " << mm[3] << endl;
	cout << "Number of picks : " << s;
	//아 맞다 정의를 100개 해두면 100개를 쓰지 않아도 length쓰면 100되는지 확인!


}