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
	int a;
	scanf("%d",&a);
	if (a==2)
		puts("Adams");
	else if (a==8)
		puts("Van Buren");
	else if (a==29)
		puts("Harding");
	return 0;
}
