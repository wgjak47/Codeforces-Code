#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<algorithm>
#include<iostream>
#define For(i,s,t) for (int i=t;i<s;i++)
using namespace std;
main()
{
	int n;
	int d[110];
	scanf("%d",&n);
	int sum=0;
	for (int i=1;i<=n;i++)
	{
		scanf("%d",&d[i]);
		sum+=d[i];
	}
	int s,t;
	int ans=0;
	scanf("%d%d",&s,&t);
	int tmp;
	if (s>t)
	{
		tmp=s;
		s=t;
		t=tmp;
	}
	for (int i=s;i<t;i++)
		ans+=d[i];
	ans=min(ans,sum-ans);
	printf("%d\n",ans);
	return 0;
}
