// find the nth rooth of a number x using binary search.

#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<set>
#include<unordered_set>
#include<unordered_map>
#include<math.h>

using namespace std;

#define ll long long
#define skip continue

#define MAXL 9223372036854775807  // 10^18
#define MAXI 2147483647           //10^9
#define MINL -9223372036854775808 // 10^18
#define MINI -2147483648           // 10^9
#define MAXUL 18446744073709551615 // 10^19
#define MAXUI 4294967295           //10^9

#define MOD 1000000007 //1000000007 (10^9+7)
#define MOD2 10007
#define MAX 100005

double eps = 1e-6; // 5 digits precision.

double multiply(double num,double count)
{
	double ans = 1;
	for(int i=1 ; i<=count ; ++i)
	{
		ans = ans * num;
	}
	return ans;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int n;
	double x,lo,hi,mid;

	cin >> x >> n;
	lo = 1, hi = x;

	while( hi - lo > eps)
	{
		mid = (lo + hi)/2;
		if( multiply(mid,n) < x)
		{
			lo = mid;
		}
		else
		{
			hi = mid;
		}
	}

	// now lo and hi contains the value of nth root of x.

	cout << lo << endl;
	cout << hi << endl;
	cout << pow(x , 1.0/n);

	//T.C: O( n * Log(x * 10^5))
	
	return 0;
}
