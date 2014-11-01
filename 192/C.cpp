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
char s[110][110];
main()
{
	int N;
	scanf("%d",&N);
	getchar();
	pf(i,0,N)
		gets(s[i]);
	bool ok=true;
	pf(i,0,N)
	{
		bool fool=false;
		pf(j,0,N)
		if (s[i][j]=='.') 
		{
			fool=true;
			break;
		}
		if (!fool)
		{
			ok=false;
			break;
		}
	}
	if (ok)
	{
		pf(i,0,N)
		{
			pf(j,0,N)
				if (s[i][j]=='.')
				{
					printf("%d %d\n",i+1,j+1);
					break;
				}
		}
		return 0;
	}
	ok=true;
	pf(i,0,N)
	{
		bool fool=false;
		pf(j,0,N)
		if (s[j][i]=='.') 
		{
			fool=true;
			break;
		}
		if (!fool)
		{
			ok=false;
			break;
		}
	}
	if (ok)
	{
		pf(i,0,N)
		{
			pf(j,0,N)
				if (s[j][i]=='.')
				{
					printf("%d %d\n",j+1,i+1);
					break;
				}
		}
		return 0;
	}
	printf("-1\n");
	return 0;
}
