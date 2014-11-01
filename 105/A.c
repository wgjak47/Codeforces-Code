#include<stdio.h>
#include<stdlib.h>
#define FOR(x) for (i=1;(temp=i*(x))<=d;i++)
main()
{
	int a[200000]={0};
	int k,l,m,n,d;
	int i,j,temp,reg=0;
	scanf("%d%d%d%d%d",&k,&l,&m,&n,&d);
	FOR(k) a[temp]=1;
	FOR(l) a[temp]=1;
	FOR(m) a[temp]=1;
	FOR(n) a[temp]=1;
	for (i=1;i<=d;i++)
		if (a[i]) reg++;
	printf("%d",reg);
	return 0;
}

