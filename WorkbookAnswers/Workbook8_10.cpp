#include <iostream> 
#include <string>
using namespace std;

int main()
{
	cout << "Enter the number of points: ";
	int number;
	cin >> number;

	cout << "Enter " << number << "points: ";
	double points[10][2];//�ִ� ���� �� �ִ� ���� ������ 10���� ����
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

	//���߹迭�� �ε����� �� ����(��ŵ)
	//�������鼭 �ּҰ� Ȯ���ϸ� �Ǵϱ� �ּҰ��� ����Ʈ�غ��� ������ ������
	cout << max_length << endl;
	cout << "The closest two points are (" << max_points1_x << " , " << max_points1_y << ") and ( " << max_points2_x << ", " << max_points2_y << " )";

}