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
int p[100010],up[100010],down[100010];
vector<int> G[100010];
int dfs_d(int u,int fa)
{
	down[u]=p[u]==1?0:-1;
	for (int i=0;i<G[u].size();i++)
	if (G[u][i]!=fa) 
	{
		int v=G[u][i];
		int d=dfs_d(v,u);
		if (d>=0)
			down[u]=max(down[u],d+1);
	}
	return down[u];
}
int dfs_u(int u,int fa)
{
	int m1=-1,m2=-1;
	for (int i=0;i<G[u].size();i++)
	{
		int v=G[u][i];
		if (v==fa) continue;
		if (down[v]>m1)
		{
			m2=m1;
			m1=down[v];
		}
		else if (down[v]>m2)
			m2=down[v];
	}
	for (int i=0;i<G[u].size();i++)
	{
		int v=G[u][i];
		if (v==fa) continue;
		int d=-1;
		if (down[v]==m1) d=m2;
		else d=m1;
		if (d!=-1) d+=2;
		up[v]=d;
		if (up[u]!=-1)
			up[v]=max(up[v],up[u]+1);
		if (p[v]) up[v]=max(0,up[v]);
		dfs_u(v,u);
	}
}
main()
{
	int m,n,d;
	int u,v;
	scanf("%d%d%d",&m,&n,&d);
	for (int i=0;i<n;i++)
	{
		int u;
		scanf("%d",&u);
		p[u]=1;
	}
	for (int i=0;i<m-1;i++)
	{
		scanf("%d%d",&u,&v);
		G[v].push_back(u);
		G[u].push_back(v);
	}
	//memset(up,-1,sizeof(up));
	//memset(down,-1,sizeof(down));
	dfs_d(1,-1);
	up[1]=p[1]==1?0:-1;
	dfs_u(1,-1);
	int ans=0;
	for (int i=1;i<=m;i++)
	{
	//	printf("%d :%d  %d\n",i,down[i],up[i]);
		ans+=down[i]<=d && up[i]<=d;
	}
	printf("%d\n",ans);
	return 0;
}
