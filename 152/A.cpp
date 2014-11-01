#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
#define min(a,b) a>b?b:a
main()
{
	int a,b;	
	int a0=0,a1=0,b0=0,b1=0;
	int N;
	scanf("%d",&N);
	for (int i=0;i<N;i++)
	{
		scanf("%d%d",&a,&b);
		if (a==1) a1++;
		else a0++;
		if (b==1) b1++;
		else b0++;
	}
	int x=min(a0,a1);
	int y=min(b0,b1);
	printf("%d\n",x+y);
	return 0;
}
