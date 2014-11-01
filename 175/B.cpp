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
int d[100010],cov[100010],dx[100010];
main()
{
	int n,s,t;
	scanf("%d%d%d",&n,&s,&t);
	d[s]=s;
	if (s==t) 
	{
		printf("0\n");
		return 0;
	}
	pf(i,1,n+1) scanf("%d",&cov[i]);
	bool found=false;
	int k=0;
	int ss=s;
	while (1)
	{
		dx[cov[s]]=d[s];
		d[s]=0;
		d[cov[s]]=dx[cov[s]];
		s=cov[s];
		k++;
		if (d[t]==ss) 
		{
			found=true;
			break;
		}
		else if (d[ss]==ss) break;
	}
	if (found) printf("%d\n",k);
	else printf("-1\n");
	return 0;
}
