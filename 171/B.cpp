#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<algorithm>
#include<iostream>
#define For(i,s,t) for (int i=t;i<s;i++)
using namespace std;
int sum[100010];
main()
{
	int n,t;
	scanf("%d%d",&n,&t);
	sum[0]=0;
	for (int i=1;i<=n;i++)
	{
		scanf("%d",&sum[i]);
		sum[i]+=sum[i-1];
	}
	int ans=0;
	int j=0;
	for (int i=1;i<=n;i++)
	{
		if (sum[i]-sum[j]<=t) continue;
		else 
		{
			ans=max(ans,i-1-j);
			j++;
		}
	}
	if (sum[n]-sum[j]<=t) ans=n-j;
	printf("%d\n",ans);
	return 0;
}

