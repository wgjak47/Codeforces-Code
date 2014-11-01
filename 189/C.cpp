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
const LLD mod=1e9+7;
LLD power(LLD n)
{
	if (n==0) return 1;
	if (n==1) return 2;
	LLD a=power(n/2)%mod;
	if (n%2==0)
	return a*a%mod;
	return a*a*2%mod;
}
main()
{
	char s[110];
	gets(s);
	int l=strlen(s);
	LLD sum=0;
	for (int i=0;i<l;i++)
	if (s[i]=='1')
	{
		sum+=power(l-2+l-i);
		sum%=mod;
	}
	cout<<sum<<endl;
	return 0;
}
