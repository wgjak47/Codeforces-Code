#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<string>
#define pf(i,s,t) for (int (i)=s;(i)<(t);(i)++)
#define mf(i,s,t) for (int (i)=s;(i)<(t);(i)--)
#define mt(a,d) memset((a),(d),sizeof(a))
using namespace std;
long long d[3*100010];
main()
{
	long long n;
	cin>>n;
	pf(i,1,n+1) cin>>d[i];
	sort(d+1,d+n+1);
	long long sum=0;
	while (n)
	{
		sum+=abs(d[n]-n);
		n--;
	}
	cout<<sum<<endl;
	return 0;
}
