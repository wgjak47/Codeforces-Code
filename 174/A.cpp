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
	int ans=0;
	N--;
	if (N==1) {printf("1\n");return 0;}
	pf(i,1,N) if (__gcd(N,i)==1) ans++;
	printf("%d\n",ans);
	return 0;
}
