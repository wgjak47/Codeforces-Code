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
int p[2*100010],q[2*100010];
main()
{
	int T;
	int n,t;
	scanf("%d",&T);
	double sum=0;int m=1;
	while (T--)
	{
		scanf("%d",&t);
		if (t==1)
		{
			int k,z;
			scanf("%d%d",&k,&z);
			sum+=k*z;
			p[k]+=z;
		}
		else if (t==2)
		{
			int k;
			scanf("%d",&k);
			sum+=k;
			q[++m]=k;
		}
		else 
		{
			sum-=p[m]+q[m];
			p[m-1]+=p[m];
			p[m]=q[m]=0;
			m--;
		}
		printf("%f\n",sum/m);
	}
	return 0;
}
