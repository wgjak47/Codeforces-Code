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
int r,c;
bool visa[12][12];
bool visb[12][12];
void search(int a,int b)
{
	pf(i,0,r) visb[i][b]=true;
	pf(i,0,c) visa[a][i]=true;
}
main()
{
	char s[12][12];
	memset(visa,0,sizeof(visa));
	memset(visb,0,sizeof(visb));
	scanf("%d%d",&r,&c);
	getchar();
	pf(i,0,r)
		gets(s[i]);
	pf(i,0,r) pf(j,0,c)
	if (s[i][j]=='S')
		search(i,j);
	int ans=0;
	pf(i,0,r) pf(j,0,c)
	{
		if (visa[i][j] && visb[i][j]) ans++;
	}
	printf("%d\n",r*c-ans);
	return 0;
}
