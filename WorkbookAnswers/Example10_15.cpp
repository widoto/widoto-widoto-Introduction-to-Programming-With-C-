#include <iostream>
#include "StackOfIntegers"

using namespace std;

int main()
{
	StackOfIntegers stack;

	for (int i = 0; i < 10; i++)
		stack.push(i);

	while (!stack.isEmpty())
		cout << stack.pop() << " ";

}