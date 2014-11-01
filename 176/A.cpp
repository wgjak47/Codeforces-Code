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
	char s[5][5];
	pf(i,0,4)
		gets(s[i]);
	pf(i,0,4)
	pf(j,0,4)
	{
		int ok=1;
		if (s[i][j]=='#')
		{
			if (j+1<4 && s[i][j+1]=='#') ok++;
			if (j+1<4 && i+1<4 && s[i+1][j+1]=='#') ok++;
			if (i+1<4 && s[i+1][j]=='#') ok++;
	 	}
		else 
	 	{
			if (j+1<4 && s[i][j+1]=='.') ok++;
			if (j+1<4 && i+1<4 && s[i+1][j+1]=='.') ok++;
			if (i+1<4 && s[i+1][j]=='.') ok++;
		}
		if (ok>=3) 
		{
			printf("YES\n");
			return 0;
	 	}
	}
	int ok=1;
	int i=3,j=3;
	if (s[i][j]=='#')
	{
			if (s[i][j-1]=='#') ok++;
			if (s[i-1][j-1]=='#') ok++;
			if (s[i-1][j]=='#') ok++;
	}
	else 
	{
			if (s[i][j-1]=='.') ok++;
			if (s[i-1][j-1]=='.') ok++;
			if (s[i-1][j]=='.') ok++;
	}
	if (ok>=3)
	{
		printf("YES\n");
		return 0;
	}
	printf("NO\n");
	return 0;
}
