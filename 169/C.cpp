#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
long long a[210000];
struct seg
{
	int max,min;
	int num;
};
seg data[2100000];
long long l[2100000];
main()
{
	int n,q;
	scanf("%d%d",&n,&q);
	for (int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	for (int j=0;j<q;j++) 
	{
		cin>>l>>r;
		
	}
	return;
}
