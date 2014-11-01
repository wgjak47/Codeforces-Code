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
#define LL long long
const LL mod=1e9+9;
using namespace std;
LL power(LL z)
{
	if (z==0) return 1LL;
	if (z==1) return 2;
	LL tmp=power(z/2);
	if (z%2==0) return tmp*tmp%mod;
	return tmp*tmp*2%mod;
}
main()
{
	LL n,m,k;
	cin>>n>>m>>k;
	LL X=max(0LL,m-(n/k*(k-1)+n%k));
	LL ans=(power(X+1)*(k%mod)+mod-(2*k%mod)+m-(X%mod)*(k%mod))%mod;
	cout<<ans<<endl;
	return 0;
}
