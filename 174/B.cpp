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
	int N;
	scanf("%d",&N);
	getchar();
	int IN=0,ALLIN=0,FOLDED=0;
	while (N--)
	{
		char c=getchar();
		if (c=='A') ALLIN++;
		if (c=='I') IN++;
		if (c=='F') FOLDED++;
	}
	int ans=0;
	if (IN==0) ans=ALLIN;
	else if (IN==1) ans=1;	
	else ans=0;
	printf("%d\n",ans);
	return 0;
}
