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
	int N;
	scanf("%d",&N);
	int total=N*N;
	int k=1;
	if (total%2==0)
	for (int i=1;i<=N;i++)
	{
		for (int i=0;i<N/2;i++)
			printf("%d ",k+i);
		for (int i=0;i<N/2;i++)
		{
			if (i) putchar(' ');
			printf("%d",total-k+1-i);
		}
		k+=N/2;
		putchar('\n');
	}
	return 0;
}
