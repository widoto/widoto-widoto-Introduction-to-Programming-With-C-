#include <iostream>
#include <time.h>
using namespace std;

class StopWatch {
private:
	int startTime;
	int endTime;

public:
	int getStartTime()
	{
		return startTime;
	}

	int getEndTime()
	{
		return endTime;
	}

	StopWatch()
	{
		startTime = time(0);
	}

	void start()
	{
		startTime = time(0);
	}

	void stop()
	{
		endTime = time(0);
	}

	int getElapsedTime()
	{
		return endTime - startTime;
	}

};


int main()
{
	//선택정렬
	int baeyeol[11] = { 1,5,6,4,0,19,3,22,33,101,24 };
	StopWatch t1;
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			if (baeyeol[i] > baeyeol[j])
			{
				int temp = baeyeol[i];
				baeyeol[i] = baeyeol[j];
				baeyeol[j] = temp;
			}

	t1.stop();
	cout << "시간은 " << t1.getElapsedTime() << endl;
}