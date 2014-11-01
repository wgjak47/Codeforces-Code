#include<cstdio>
#include<cstring>
#include<cstdlib>
int in[1200];
int temp[1200];
int cmp(const void *a,const void *b)
{
	return *(int *)b-*(int *)b;
}
main()
{
	int N,M;
	int sum=0;
	scanf("%d%d",&N,&M);
	for (int i=0;i<M;i++)
	{
		scanf("%d",&in[i]);
		sum+=in[i];
	}
	if (sum<N) N=sum;
	int max=0;
	memcpy(temp,in,sizeof(temp));
	for (int i=0;i<N;i++)
	{
		int m=0;
		for (int j=0;j<M;j++)
			if (in[j]>in[m]) m=j;
		max+=in[m];
		in[m]--;	
	}
	memcpy(in,temp,sizeof(temp));
	int min=0;
	for (int i=0;i<N;i++)
	{
		int m=2000,lt;
		for (int j=0;j<M;j++)
			if (in[j]<m && in[j]>0) {m=in[j];lt=j;}
		min+=in[lt];
		in[lt]--;
	}
	printf("%d %d\n",max,min);
}
