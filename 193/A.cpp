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
	int n;
	char s[2100];
	scanf("%d",&n);
	getchar();
	gets(s);
	int l=strlen(s);
	int ans=0;
	for (int i=n;i<l;i+=n)
	if (i>=3)
	{
		if (s[i-1]==s[i-2] && s[i-2]==s[i-3])
			ans++;
	}
	printf("%d\n",ans);
	return 0;
}
