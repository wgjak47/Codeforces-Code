#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
#define For(i,l,r) for (int i=l;i<r;i++)
using namespace std;
int judge(int M,int N,char s[][52])
{
	bool B=false,W=false;
	for (int i=0;i<M;i++)
	{
		B=false,W=false;
		for (int j=0;j<N;j++)
		if (s[i][j]=='B')
		{
			if (W) return false;
		}
		else if (B) W=true;
	}
	for (int i=0;i<N;i++)
	{
		B=false,W=false;
		for (int j=0;j<M;j++)
		if (s[i][j]=='B')
		{
			if (W) return false;
		}
		else if (B) W=true;
	}
	return true;
}
main()
{
	int M,N;
	char s[52][52];
	scanf("%d%d",&M,&N);
	for (int i=0;i<M;i++)
		gets(s[i]);
	bool ans=judge(M,N,s);
		
	return 0;
}
