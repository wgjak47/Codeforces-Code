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
long long gcd(long long a,long long b)
{
	return b==0?a:gcd(b,a%b);
}
main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int ac=a*c/gcd(a,c);
	int bd=b*d/gcd(b,d);
	int a1,b1,c1,d1;
	long long ans1,ans2;
	a1=ac,b1=b*(ac/a),c1=ac,d1=d*(ac/c);
	//cout<<a1<<' '<<b1<<' '<<c1<<' '<<d1<<endl;
	if ((long long)a1*b1<(long long)c1*d1)
	{
		b1=bd,a1=a*(bd/b);
		d1=bd,c1=c*(bd/d);
	}
	ans1=(long long)a1*b1-(long long)c1*d1,ans2=(long long)a1*b1;
	cout<<ans1/gcd(ans1,ans2)<<'/'<<ans2/gcd(ans1,ans2)<<endl;
	return 0;
}
