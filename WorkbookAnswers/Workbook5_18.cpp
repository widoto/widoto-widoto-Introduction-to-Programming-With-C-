```cpp
#include <iostream> 
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	int count = 0;
	for (int i = 33; i <= 126; i++)
	{
		if (count != 10)
		{
			cout << static_cast<char>(i) << " ";
			count += 1;

		}

		else
		{
			cout << endl;
			count = 0;
		}

	}

	return 0;
}
```