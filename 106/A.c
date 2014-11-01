#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cmp(const void *a , const void *b)
{
	return *(int *)b-*(int *)a;
}
main()
{
	int a[20]={0};
	int n;
	int i,j,k,l,m,sum=0,flag=0;
	scanf("%d",&n);
	for (i=0;i<12;i++)
		scanf("%d",&a[i]);
	qsort(a,12,sizeof(int),cmp);
	for (i=0;i<=12;i++)
	{
		if (sum>=n) {flag=1;break;}
		    sum+=a[i];
	}
	if (flag) printf("%d",i);
	else printf("-1");
	return 0;
}

