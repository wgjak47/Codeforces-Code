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
main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	if (n==1 && k==1) {printf("a\n");return 0;}
	if (k>n || k==1) {printf("-1\n");return 0;}
	if (n==k)
	{
		pf(i,0,26)
		{
			if (i==k) break;
			putchar(i+'a');
		}
		putchar('\n');
		return 0;
	}
	int z=k-2;
	int m=n-z;
	pf(i,0,m) 
		if (i%2==0) 
			putchar('a');
		else 
			putchar('b');
	pf(i,0,z)
		putchar(i+'c');
	putchar('\n');
	return 0;
}
