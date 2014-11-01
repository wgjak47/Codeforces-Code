#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<algorithm>
#include<iostream>
#define For(i,s,t) for (int i=t;i<s;i++)
using namespace std;
int fx[310];
int u[100*101],v[100*101],w[100*101],r[100*101];
bool vis[300];
int find(int x) {return fx[x]==x?x:fx[x]=find(fx[x]);}
int solve(int N)
{
	int sum=0;
	for (int i=0;i<N;i++)
	{
		int x=find(u[i]),y=find(v[i]);
		if (x!=y) 
		{
			sum++;
			fx[y]=x;
		}
	}
	return sum;
}
int cmp(const void *a,const void *b)
{
	int x=*(int *)a;
	int y=*(int *)b;
	return w[x]-w[y];
}
main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	for (int i=1;i<=n+m;i++) fx[i]=i,r[i]=i;
	memset(w,0x7f,sizeof(w));
	memset(vis,0,sizeof(vis));
	for (int i=1;i<=n;i++)
	{
		int k=0;
		scanf("%d",&k);
		int d;
		for (int j=0;j<k;j++)
		{
			scanf("%d",&d);
			int z=find(i);
			fx[z]=find(d+n);
			vis[d+n]=true;
		}
	}
	int k=0;
	int ans=0;
	for (int i=n+1;i<=n+m;i++) if (!vis[i]) ans++;
	if (ans==m) ans=m-1;
	for (int i=n+1;i<=n+m;i++)
	for (int j=1;j<=n;j++)
		u[k]=i,v[k]=j,w[k++]=1;
	qsort(r+1,k,sizeof(int),cmp);
	printf("%d\n",solve(k)-ans);
	return 0;
}
