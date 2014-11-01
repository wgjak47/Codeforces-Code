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
int a0[110],a1[110];
main()
{
	int n;
	scanf("%d",&n);
	pf(i,1,n+1)
	{
		int u;
		scanf("%d",&u);
		a0[i]=a0[i-1];
		a1[i]=a1[i-1];
		if (!u) a0[i]++;
		else a1[i]++;
	}
	int maxs=0;
	a1[n+1]=a1[n];
	pf(i,0,n)
	pf(j,i+1,n+1)
	{
		maxs=max((a0[j]-a0[i])+a1[i]+a1[n]-a1[j],maxs);
	}
	printf("%d\n",maxs);
	return 0;
}
