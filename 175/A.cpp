#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<string>
#define pf(i,s,t) for (int (i)=s;(i)<(t);(i)++)
#define mf(i,s,t) for (int (i)=s;(i)<(t);(i)--)
#define mt(a,d) memset((a),(d),sizeof(a))
using namespace std;
int a[100010];
main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	pf(i,1,n+1) a[i]=i;
	int l=1,r=k+1;
	while (l<r)
	{
		int tmp=a[l];
		a[l]=a[r];
		a[r]=tmp;
		l++;r--;
	}
	pf(i,1,n+1) 
	{
		if (i-1) putchar(' ');
		printf("%d",a[i]);
	}
	putchar('\n');
	return 0;
}
