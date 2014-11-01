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
	long long x,y,n;
	cin>>x>>y>>n;
	double k=x/(y*1.0);
	double min=100;
	long long a,b;
	int minb=1000000;
	for (long long i=1;i<=n;i++)
	{
		long long z=(long long)floor(i*k);
		if (min>fabs((i*x-y*z)*1.0/(y*i)))
		{
			min=fabs((i*x-y*z)*1.0/(y*i));
			a=z;
			b=i;
		}
		cout<<i<<endl;
		cout<<"min: "<<min<<" z:"<<z<<" fabs"<<fabs((i*x-y*z)*1.0/(y*i))<<endl;
		z++;
		if (min>fabs((i*x-y*z)*1.0/(y*i)))
		{
			min=fabs((i*x-y*z)*1.0/(y*i));
			a=z;
			b=i;
		}
		cout<<"min: "<<min<<" z:"<<z<<" fabs"<<fabs((i*x-y*z)*1.0/(y*i))<<endl;
	}
	cout<<endl;
	cout<<a<<'/'<<b<<endl;
	cout<<endl;
	return 0;
}
