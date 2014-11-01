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
int ll[110],rr[110];
int G[110][110];
int k=0;
bool vis[110];
bool find(int a,int b)
{
	if (G[a][b]==1) return true;
	if (a==b) return true;
	for (int i=1;i<=k;i++)
		if (i!=a && !vis[i])
		if (G[a][i]==1 || (ll[a]<rr[i] && ll[a]>ll[i]) || (rr[a]<rr[i] && rr[a]>ll[i]))
		{
			G[a][i]=1;
			vis[i]=true;
			if (find(i,b)) return true;
		}
	return false;
}
main()
{
	int T;
	scanf("%d",&T);
	memset(G,0,sizeof(G));
	while (T--)
	{
		int q,a,b;
		scanf("%d%d%d",&q,&a,&b);
		if (q==1)
		{
			ll[++k]=a;
			rr[k]=b;
		}
		else
		{
		//	printf("%d\n",k);
			memset(vis,0,sizeof(vis));
			bool ans=find(a,b);
			printf("%s",ans==true?"YES\n":"NO\n");
		}
	}
	return 0;
}
