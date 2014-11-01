#include<cstdio>
#include<cstring>
#include<cstdlib>
main()
{
	int M,N;
	int reg=0;
	scanf("%d%d",&N,&M);
	int max=N>M?N:M;
	for (int i=0;i<=max;i++)
	for (int j=0;j<=max;j++)
		if (i*i+j==N && j*j+i==M)
			reg++;
	printf("%d\n",reg);
	return 0;
}
