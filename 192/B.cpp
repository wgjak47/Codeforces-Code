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
int vis[1010];
int G[1010][1010];
main()
{
	int m,n;
	scanf("%d%d",&n,&m);
	pf(i,0,m)
	{
		int u,v;
		scanf("%d%d",&u,&v);
		vis[u]++;
		vis[v]++;
		G[u][v]=true;
		G[v][u]=true;
	}
	int mp=1;
	pf(i,2,n+1) if (vis[mp]>vis[i]) mp=i;
	//printf("%d\n",mp);
	int ans=n-1-vis[mp];
	ans+=vis[mp]*(n-1);
	printf("%d\n",ans);
	pf(i,1,n+1)
	if (i!=mp)
	{
		if (!G[mp][i])
		printf("%d %d\n",mp,i);
		else 
		{
			pf(j,1,n+1)
			if (i!=j)
			{
				if (!G[i][j])
				printf("%d %d\n",i,j);
				else pf(k,1,n+1)
				if (k!=i)
				{
					if (!G[j][k])
						printf("%d %d\n",j,k);
				}
			}
		}
	}
	return 0;
}
