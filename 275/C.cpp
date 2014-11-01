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
void build_perfix(int n, int k)
{
    int l=2,r=n;
    int reg=1;
    cout<<1;
    while (reg < k)
    {
        if (reg%2==0)
        {
            cout<<' '<<l++;
        }
        else 
        {
            cout<<' '<<r--;
        }
        reg++;
    }
    if (reg%2)
    {
        for (int i=l;i<=r;i++)
            cout<<' '<<i;
    }
    else
    {
        for (int i=r;i>=l;i--)
            cout<<' '<<i;
    }
}
main()
{
    int n,k;
    cin>>n>>k;
    build_perfix(n,k);
	return 0;
}
