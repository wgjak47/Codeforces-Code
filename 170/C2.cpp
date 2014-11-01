#include<cstdio>
#include<cstring>
bool G[210][210];
bool vis[210];
void dfs(int a,int n)
{
	for (int i=1;i<=n;i++)
		if (!vis[i])
		if (G[a][i])
		{
			vis[i]=true;
			dfs(i,n);
		}
}
main()
{
	int m,n;
	scanf("%d%d",&n,&m);
	memset(vis,0,sizeof(vis));
	int empty=0;
	for (int i=1;i<=n;i++)
	{
		int a;
		scanf("%d",&a);
		if (a==0) empty++;
		while (a--)
		{
			int z;
			scanf("%d",&z);
			G[i][z+n]=G[z+n][i]=1;
		}
	}
	int ans=0;
	for (int i=1;i<=n;i++)
	if (!vis[i])
	{
		ans++;
		dfs(i,m+n);
	}
	if (empty==n) ans++;
	printf("%d\n",ans-1);
	return 0;
}
