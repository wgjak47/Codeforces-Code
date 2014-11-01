#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<algorithm>
#include<iostream>
#define For(s,t) for (int i=t;i<s;i++)
using namespace std;
int d[410][410];
main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	int x0=100,y0=100;
	int ans=0,k=1;
	d[100][100]=0;
	while (1)
	{
		if (x0>200 &&  y0>200) break;	
		for (int i=0;i<k;i++)
			d[++x0][y0]=ans;
		ans++;
		for (int i=0;i<k;i++)
		d[x0][++y0]=ans;
		ans++;
		k++;
		if (x0> 200 &&  y0 > 200) break;	
		for (int i=0;i<k;i++)
		 d[--x0][y0]=ans;
		ans++;
		for (int i=0;i<k;i++)
		 d[x0][--y0]=ans;
		ans++;
		k++;
	}
	printf("%d\n",d[x+100][y+100]);
	return 0;
}

