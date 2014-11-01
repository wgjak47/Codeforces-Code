#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#define pf(i,s,t) for (int (i)=s;(i)<(t);(i)++)
#define mf(i,s,t) for (int (i)=s;(i)<(t);(i)--)
#define mt(a,d) memset((a),(d),sizeof(a))
using namespace std;
int s[100010];
int stack[100010];
int top=0;
main()
{
	int N;
	scanf("%d",&N);
	pf(i,0,N) scanf("%d",&s[i]);
	stack[top++]=s[0];
	int ans=0;
	pf(i,1,N)
	{
		while (top>0 && stack[top-1]<s[i])
		{
			ans=max(ans,stack[top-1]^s[i]);
			top--;
		}
		if (top>0)
		ans=max(ans,stack[top-1]^s[i]);
		stack[top++]=s[i];
	}	
	printf("%d\n",ans);
	return 0;
}
