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
int t[110],w[110];
int dp[210];
main()
{
	int N;
	int sum=0;
	scanf("%d",&N);
	pf(i,0,N) 
	{
		scanf("%d%d",&t[i],&w[i]);
		sum+=t[i];
	}
	mf(j,sum,-1) dp[j]=1e9;
	dp[0]=0;
	pf(i,0,N)
	mf(j,sum,-1)
	{
		if (j-t[i]>=0)
		dp[j]=min(dp[j],dp[j-t[i]]+w[i]);
	}
	int ans=sum;
	for (int i=0;i<=sum;i++)
		if (dp[i]<=sum-i)
			ans=min(sum-i,ans);
	printf("%d\n",ans);
	return 0;
}
