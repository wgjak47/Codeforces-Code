#include<stdio.h>
#include<stdlib.h>
int a[100000]={0}
main()
{
	int max=0;;
	int n,i,j,k,l,m,n;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if (max<a[i]) max=a[i];
	}
	
