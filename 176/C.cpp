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
int f[100010];
int N;
bool dfs(int l,int r,int k)
{
	if (r-l+1>=4)
	{
		f[l]=2+k*2;
		f[l+1]=N-k*2;
		f[r]=N-1-k*2;
		f[r-1]=1+k*2;
		return dfs(l+2,r-2,k+1);
	}
	else if (r-l+1==1)
	{
		f[r]=r;
		return true;
	}
	else if (r<l) return true;
	return false; 
}
main()
{
	scanf("%d",&N);
	if (!dfs(1,N,0)) 
	{
		printf("-1\n");
		return 0;
	}
	pf(i,1,N+1)
	{
		if (i!=1) putchar(' ');
		printf("%d",f[i]);
	}
	putchar('\n');
	return 0;
}
