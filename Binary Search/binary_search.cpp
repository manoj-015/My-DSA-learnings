#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int n,to_find;
    bool found = 0;
    cin >> n;
    vector<int> v;

    for(int i=0 ; i<n ; ++i)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cin >> to_find;
    int lo = 0 , hi = n-1 , mid;

    while(lo <= hi)
    {
        mid = (lo + hi)/2;
        if(v[mid] > to_find)
        {
            hi = mid - 1;
        }
        else if(v[mid] < to_find)
        {
            lo = mid + 1;
        }
        else if(v[mid] == to_find)
        {
            found = 1;
            cout << mid << endl;
            break;
        }
    }
    if(! found)cout<<"-1"<<endl;
    return 0;
}
