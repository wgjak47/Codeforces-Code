#include<cstdio>
#include<cstring>
int u[1001],v[1001];
int ansu[1001],ansv[1001];
bool visu[1001],visv[1001];
int Gu[1001][1001],Gv[1001][1001];
int lu=0,lv=0
main()
{
	int N;
	int temp[1001];
	memset(G,0,sizeof(G));
	scanf("%d",&N);
	memset(visu,0,sizeof(vis));
	memset(visv,0,sizeof(vis));
	for (int i=1;i<N;i++)
	{
		scanf("%d%d",&u[i],&v[i]);
		Gu[u[i]][lu++]=v[i];
		Gv[v[i]][lv++]=u[i];
		if (u[i]>v[i])
		{
			visu[u[i]]=true;
			visv[v[i]]=true;
		}
	}
	bool vis[1001];
	memset(vis,0,sizeof(vis));
	int row=0;
	int k;
	for (k=1;k<N;k++)
	{
		int max=1;
		for (int i=1;i<N;i++)
		if (!vis[i])
		{
			if (u[max]<u[i]) max=i;	
		}	
		while (row<max && visu[row]) row++;
		if (row<max)
		{
			ansu[k]=u[max],ansv[k]=row;
			vis[max]=true;
			for (int i=0;i<)
		} else break;
	}
	return 0;
}
