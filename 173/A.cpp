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
using namespace std;
main()
{
	string a;
	int T;
	scanf("%d",&T);
	getchar();
	int ans=0;
	while (T--)
	{
		cin>>a;
		if (a[1]=='+') ans++;
		else if (a[1]=='-') ans--;
	}
	printf("%d\n",ans);
	return 0;
}
