#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
main()
{
	int m,n,a;
	while (scanf("%d%d%d",&m,&n,&a)==3)
	{
		int t=m/a;
		if (t*a<m) t++;
		int z=n/a;
		if (z*a<n) z++;
		cout<<(long long)z*t<<endl;
	}
	return 0;
}
