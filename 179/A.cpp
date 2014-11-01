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
int num[1100];
main()
{
	int N;
	scanf("%d",&N);
	int T=N;
	while (T--)
	{
		int v;
		scanf("%d",&v);
		num[v]++;
	}
	int k=0;
	bool ans=true;
	if (N%2==0)  k=N/2;
	else k=N/2+1;
	pf(i,1,1001)
	if (num[i]>k)
	{ 
		ans=false;
		break;
	}
	printf("%s\n",ans?"YES":"NO");
	return 0;
}
