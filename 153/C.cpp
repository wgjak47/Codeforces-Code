#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
long long data[100001];
main()
{
	long long n,d;
	cin>>n>>d;
	long long ans=0;
	long long j=0;
	for (int i=0;i<n;i++)
	{
		cin>>data[i];
		if (i!=0 && data[j]+d<data[i])
		{
			ans+=(i-j-1)*(i-j-2)/2;	
			j++;
			while (data[j]+d<data[i])
			{
				ans+=(i-j-1)*(i-j-2)/2;	
				j++;
			}
		}
	}
	while (j<n-2)
	{
		ans+=(n-j-1)*(n-j-2)/2;
		j++;
	}
	cout<<ans<<endl;
	return 0;
}
