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
LLD z[60];
LLD three[60];
main()
{
	LLD N;
	cin>>N;
	LLD T=N;
	int k=0;
	three[0]=1;
	for (int i=1;i<=40;i++) three[i]=three[i-1]*3;
	while (T>0)
	{
		z[k++]=T%3;
		T/=3;
	}
	LLD sum=0;
	int m=0;while (z[m]==0) m++;
	sum=1;
	for (int i=m+1;i<k;i++)
	{
		sum+=z[i]*three[i-m-1];
	}
	cout<<sum<<endl;
	return 0;
}
