#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#define pf(i,s,t) for (int (i)=s;(i)<(t);(i)++)
#define mf(i,s,t) for (int (i)=s;(i)<(t);(i)--)
#define mt(a,d) memset((a),(d),sizeof(a))
using namespace std;
main()
{
	int x,y,n;
	scanf("%d%d%d",&x,&y,&n);
	double k=x/(y*1.0);
	double min=100;
	int a,b;
	int minb=1000000;
	for (int i=1;i<=n;i++)
	{
		int z=(int)floor(i*k);
		if (min-fabs(k-1.0*z/i)>1e-15)
		{
			min=fabs(k-1.0*z/i);
			a=z;
			b=i;
		}
		z++;
		if (min-fabs(k-1.0*z/i)>1e-15)
		{
			min=fabs(k-1.0*z/i);
			a=z;
			b=i;
		}
	}
	printf("%d/%d\n",a,b);
	return 0;
}
