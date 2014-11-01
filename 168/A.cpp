#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
#define For(i,l,r) for (int i=l;i<r;i++)
using namespace std;
int gird[9][9];
int out[9][9];
int x[10]={0,1,0,-1};
int y[10]={1,0,-1,0};
main()
{
	memset(out,0,sizeof(out));
	for (int i=1;i<=3;i++)
	for (int j=1;j<=3;j++)
	{
		scanf("%d",&gird[i][j]);
		if (gird[i][j]%2==0) continue;
		for (int k=0;k<4;k++)
			out[i+x[k]][j+y[k]]++;
		out[i][j]++;
	}
	for (int i=1;i<=3;i++)
	{
		for (int j=1;j<=3;j++)
			printf("%d",out[i][j]%2==0);
		putchar('\n');
	}
	return 0;
}
