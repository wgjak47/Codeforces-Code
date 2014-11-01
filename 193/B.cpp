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
const int maxn=(1e5+10)*2;
LLD a[maxn];
LLD b[maxn];
LLD c[maxn];
int maxa[maxn];
main()
{
	int N,k;
	scanf("%d%d",&N,&k);
	pf(i,1,N+1) 
	{
		cin>>a[i];
		b[i]=b[i-1]+a[i];
	}
	pf(i,1,N+1-k+1)
	{
		c[i]=b[i+k-1]-b[i-1];
		maxa[i+k-1]=i;
		if (c[maxa[i+k-2]]>=c[maxa[i+k-1]])
			maxa[i+k-1]=maxa[i-2+k];
	}
	LLD max_ans=-1e9;
	int A,B;
	pf(i,k+1,N+2-k)
	{
		LLD sum=c[i]+c[maxa[i-1]];
		if (max_ans<sum)
		{
			max_ans=sum;
			A=maxa[i-1];
			B=i;
		}
	}
	cout<<A<<' '<<B<<endl;
	return 0;
}
