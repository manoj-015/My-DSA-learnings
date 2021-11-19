// Implemented setbit,unsetbit, checkbit, count no of set bits and print the the binary of the number using c++

#include <iostream>
using namespace std;

void checkBit(int n, int i)
{
	((n >> i) &1) ? cout << "Set Bit": cout << "Unset Bit";
}

int setBit(int n, int i)
{
	return ((1 << i) | n);
}

int unsetBit(int n, int i)
{
	return ((~(1 << i)) &n);
}

void printBinary(int n)
{
	for (int i = 10; i >= 0; --i)
	{
		cout << ((n >> i) &1);
	}

	cout << endl;
}

int countNumberOfSetBits(int n)
{
	int count = 0;
	for (int i = 30; i >= 0; --i)
	{
		count += (n >> i) &1;
	}

	return count;
}

int toggleBit(int n, int i)
{
	return (n ^ (1 << i));
}

int main()
{
	int n, i;
	cin >> n >> i;
	printBinary(n);

	n = toggleBit(n, i);
	printBinary(n);

	return 0;
}
