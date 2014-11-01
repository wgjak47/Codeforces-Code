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
bool check(string &a)
{
	int l=a.size();
	pf(i,0,l)
		if (a[i]!='0') return true;
	return false;
}
main()
{
	string a,b;
	cin>>a>>b;
	int la=a.size();
	int lb=b.size();
	if (la!=lb)
	{
		printf("NO\n");
		return 0;
	}
	if ((check(a) && check(b)) || a==b)
		printf("YES\n");
	else 
	printf("NO\n");
	return 0;
}
