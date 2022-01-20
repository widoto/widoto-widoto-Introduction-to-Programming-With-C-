#include <iostream> 
#include <string>
#include <ctime>
#include <algorithm>
using namespace std;


void employees(double m[][7])
{
	double em[8];

	for (int i = 0; i < 8; i++)
	{
		double sum = 0;
		for (int j = 0; j < 7; j++)
			sum += m[i][j];
		em[i] = sum;
	}

	//이제 가려내야 해

	double maxIndex;


	for (int z = 0; z < 8; z++)//이건 횟수
	{
		//const int SIZE = 8 - z;이건 왜 안될까?///////////질문하자.
		//일단 모든 직원이 일주일 합 최소 0시간 초과로 일한다고 하자.
		double mm[8] = { 0,0,0,0,0,0,0,0 };
		//최대를 구하고
		double maxi = em[0];
		//for(int g=0;g<8-z;g++)
			//maxi = max(maxi,em[g]) 이것도 안되네 벡터써야 하나봄

		//double maxi = max(em);이렇게는안되나바 포인터 써야되나봄
		//int SIZE = em.length(); 이건 왜 또 안될까?? 질문하자
		for (int k = 0; k < 8; k++)
		{
			if (em[k] == maxi)
			{
				//인덱스 찾아서 cout
				for (int i = 0; i < 8 - z; i++)
					if (em[i] == maxi)
						cout << "Employee " << i << " workhour: " << maxi << endl;
			}
			else
				mm[k] = em[k];
		}

		for (int h = 0; h < 8 - z; h++)
			mm[h] = em[h];
	}


}
int main()
{
	cout << "Enter a 8-by-7 matrix rowby row: " << endl;
	double matrix[8][7];
	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 7; j++)
			cin >> matrix[i][j];

	employees(matrix);


}