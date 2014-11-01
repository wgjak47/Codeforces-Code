#include<cstdio>
#include<cstring>
#include<cstdlib>
int outx[10010],outy[10010];
int order[10010];
int cmp(const void *a,const void *b)
{
	int x=*(int *)a,y=*(int *)b;
	if (outx[x]>outx[y]) return 1;
	else if (outx[x]==outx[y] && outy[x]>outy[y])
	   return 1;
	if (outx[x]==outx[y] && outy[x]==outy[y]) return 0;
	return -1;
}
main()
{
	int x,y,a,b;
	scanf("%d%d%d%d",&x,&y,&a,&b);
	int k=0;
	for (int i=b;i<=y;i++)
	for (int j=a>i+1?a:i+1;j<=x;j++)
		outx[k]=j,outy[k++]=i;
	printf("%d\n",k);
	for (int i=0;i<k;i++) order[i]=i;
	qsort(order,k,sizeof(int),cmp);
	for (int i=0;i<k;i++)
		printf("%d %d\n",outx[order[i]],outy[order[i]]);
	return 0;
}
