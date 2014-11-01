#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<string>
#define pf(i,s,t) for (int (i)=s;(i)<(t);(i)++)
#define mf(i,s,t) for (int (i)=s;(i)>(t);(i)--)
#define mt(a,d) memset((a),(d),sizeof(a))
#define LLD long long
using namespace std;
const int maxn=1e5+10;
struct order
{
	int num,a,b;
};
order data[maxn];
order data2[maxn];
bool vis[maxn];
bool cmp(const order & a,const order &b)
{
	return a.a>b.a;
}
bool cmp2(const order & a,const order &b)
{
	return a.b<b.b;
}
main()
{
	int n,p,k;
	scanf("%d%d%d",&n,&p,&k);
	pf(i,0,n) 
	{
		order &e=data[i];
		scanf("%d%d",&e.a,&e.b);
		data2[i]=data[i];
	}
	sort(data,data+n,cmp);
	sort(data2,data2+n,cmp2);
	int sum=0;
	for (int i=0;i<k;i++)
	{
		vis[i]=true;
		sum+=data[i].a;
	}
	return 0;
}
