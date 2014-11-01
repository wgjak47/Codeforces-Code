#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<string>
#define pf(i,s,t) for (int (i)=s;(i)<(t);(i)++)
#define mf(i,s,t) for (int (i)=s;(i)>(t);(i)--)
#define mt(a,d) memset((a),(d),sizeof(a))
#define LLD long long
using namespace std;
bool check(int first,int second,int common,int cnt1,int cnt2)
{
//    printf("%d %d %d\n",first,second,common);
    int first_used = max(first - common,0);
    int second_used = max(second - common,0);
    cnt1 -= first_used;
    cnt2 -= second_used;
    cnt1 = max(0,cnt1);
    cnt2 = max(0,cnt2);
    if (common >= cnt1 + cnt2)
        return true;
    return false;
}
main()
{
    int cnt1,cnt2,x,y;
    cin >> cnt1 >> cnt2 >> x >> y;
    int L = 0,R = 2 * 1e9;
    int common,mid,first,second;
    while (L < R)
    {
        mid = (L + 1LL*R) / 2;
        first = mid - mid / x;
        second = mid - mid / y;
        common = mid - mid / x - mid / y + mid / (x * y);
        if (check(first,second,common,cnt1,cnt2) == true)
        {
            R = mid;
        }
        else L = mid + 1; 
    }
    cout<<L<<endl;
	return 0;
}
