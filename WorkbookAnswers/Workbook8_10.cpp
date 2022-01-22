#include <iostream> 
#include <string>
using namespace std;

int main()
{
	cout << "Enter the number of points: ";
	int number;
	cin >> number;

	cout << "Enter " << number << "points: ";
	double points[10][2];//최대 넣을 수 있는 점의 개수를 10개로 제한
	for (int i = 0; i < number; i++)
	{
		for (int j = 0; j < 2; j++)
			cin >> points[i][j];

	}


	double max_length = 9990;
	double max_points1_x = 0;
	double max_points1_y = 0;
	double max_points2_x = 0;
	double max_points2_y = 0;
	double length;
	for (int j = 0; j < number - 1; j++)
	{
		for (int z = j + 1; z < number; z++)
		{
			length = (points[j][0] - points[z][0])*(points[j][0] - points[z][0]) + (points[j][1] - points[z][1])*(points[j][1] - points[z][1]);
			if (max_length > length)
			{
				max_length = length;
				max_points1_x = points[j][0];
				max_points1_y = points[j][1];
				max_points2_x = points[z][0];
				max_points2_y = points[z][1];


			}

		}
	}

	//삼중배열에 인덱스와 값 저장(스킵)
	//포문돌면서 최소값 확인하면 되니까 최소값만 프린트해보는 것으로 마무리
	cout << max_length << endl;
	cout << "The closest two points are (" << max_points1_x << " , " << max_points1_y << ") and ( " << max_points2_x << ", " << max_points2_y << " )";

}