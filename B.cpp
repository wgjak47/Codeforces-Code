#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int x[5100],y[5100],z[5100];
int cmp(const void *a,const void *b)
{
	return *(int *)a-*(int *)b;
}
main()
{
	int N,M,K;
	scanf("%d",&N);
	for (int i=0;i<N;i++)
		scanf("%d",&x[i]);
	scanf("%d",&M);
	for (int j=0;j<M;j++)
		scanf("%d",&y[j]);
	scanf("%d",&K);
	for (int j=0;j<K;j++)
		scanf("%d",&z[j]);
	int A,B;
	scanf("%d%d",&A,&B);
	qsort(x,N,sizeof(int),cmp);
	qsort(y,M,sizeof(int),cmp);
	qsort(z,K,sizeof(int),cmp);
	double r=x[N-1]*x[N-1]*1.0/(A*z[0]*1.0/(y[M-1]*B)+1);
	printf("%.16lf\n",sqrt(r));
	return 0;
}
