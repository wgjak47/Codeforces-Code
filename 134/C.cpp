#include<cstdio>
#include<cstring>
int p[200];
int xx[110],yy[110];
int G[110][110];
int find(int x)
{
	return x==p[x]?x:p[x]=find(p[x]);
}
main()
{
	int N;	
	scanf("%d",&N);
	int sum=N;	
	for (int i=0;i<N;i++) p[i]=i;
	for (int i=0;i<N;i++)
		scanf("%d%d",&xx[i],&yy[i]);
	for (int i=0;i<N;i++)
	for (int j=i+1;j<N;j++)
		if (xx[i]==xx[j] || yy[i]==yy[j])
		{
			if (find(i)!=find(j))
				sum--;
			p[find(i)]=find(j);
		}
	printf("%d\n",sum-1);
	return 0;
}
