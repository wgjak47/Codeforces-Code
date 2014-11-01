#include<cstdio>
#include<cstring>
#include<cstdlib>
int put[11000000];
bool vis[11000000];
int cmp(const void *a,const void *b)
{
	return *(int *)a-*(int *)b;
}
main()
{
	int y,n,k;
	scanf("%d%d%d",&y,&k,&n);
	memset(vis,0,sizeof(vis));
	int l=0;
	for (int i=1;i<=n/k;i++)
	if (i%k==0)
	{
		if (i>y) put[l++]=i;
		if (i*k>y) put[l++]=i*k;
	}
	else if (i*k>y) put[l++]=i*k;
	qsort(put,l,sizeof(int),cmp);
	for (int i=1;i<l;i++)
		if (put[i]==put[i-1])
			vis[i]=true;
	for (int i=0;i<l-1;i++)
		if (!vis[i])
		printf("%d ",put[i]-y);
	if (l) 
	{
		if (!vis[l-1]) printf("%d\n",put[l-1]-y);
	}
	else printf("-1\n");
	return 0;
}
