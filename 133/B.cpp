#include<cstdio>
#include<cstring>
#include<cstdlib>
int cmp(const void *a,const void *b)
{
	return *(int *)a-*(int *)b;
}
main()
{
	int M,N;
	int reg[200];
	memset(reg,0,sizeof(reg));
	scanf("%d%d",&M,&N);
	int u,v;
	for (int i=0;i<N;i++)
	{
		scanf("%d%d",&u,&v);
		reg[u]++;
		reg[v]++;
	}
	int total=M;
	qsort(reg+1,M+1,sizeof(int),cmp);
	int sum1=0,sum2=0;
	for (int i=2;i<=M;i+=2)
	{
		sum1+=reg[i];
		sum2+=reg[i-1];
	}
	while (sum1>M/2 || sum2>M/2)
	{
		if (N%2)
		{
			sum1-=reg[M-1];	
			sum2-=reg[M-2];
		}
		else 
		{
			sum1-=reg[M];
			sum2-=reg[M-1];
		}
		M-=2;
	}
	if (M%2)
		printf("%d\n",total-M+1);
	else printf("%d\n",total-M);
	return 0;
}
