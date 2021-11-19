// implemented a^b function with in O(log(b))

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

long long binExpRec(long long a, long long b)
{
	if (b == 0) return 1;

	long long ans = binExpRec(a, b / 2);

	if (b & 1)
	{
		return a *ans * ans;
	}
	else
	{
		return ans * ans;
	}
}

long long binExpIter(long long a, long long b)
{
	long long ans = 1;

	while (b)
	{
		if (b & 1)
		{
			ans = ans * a;
		}

		a = a * a;
		b = b >> 1;
	}

	return ans;
}

int main()
{
	long long a, b;
	cin >> a >> b;

	cout << binExpRec(a, b) << endl;

	cout << fixed << setprecision(0) << pow(a, b) << endl;

	cout << binExpIter(a, b) << endl;
}
