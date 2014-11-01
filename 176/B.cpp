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
#define LLD long long
using namespace std;
LLD mid_search(LLD N,LLD k)
{
	LLD l=0,r=k-1;
	LLD mid;
	while (l<r)
	{
		mid=(l+r)/2;
		if ((k-1+mid)*(k-mid)/2+1==N) return mid;
		if ((k-1+mid)*(k-mid)/2+1<=N)
			r=mid;
		else l=mid+1;
	}
	return l;
}
main()
{
	LLD N,k;
	cin>>N>>k;
	LLD sum=k*(k-1)/2+1;
	if (sum<N) 
	{
		printf("-1\n");
		return 0;
	}
	if (N==1) {printf("0\n");return 0;}
	if (N<=k) {printf("1\n");return 0;}
	long long z=mid_search(N,k);
	if ((k-1+z)*(k-z)/2+1<N) z--;
	cout<<k-z<<endl;
	return 0;
}
