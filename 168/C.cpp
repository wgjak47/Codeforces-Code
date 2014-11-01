#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
#define For(i,l,r) for (int i=l;i<r;i++)
using namespace std;
long long a[100010],b[100010];
bool vis[100010];
void find(long long goal,int l,int r)
{
	while (l<r)
	{
		int mid=l+(r-l)/2;
		if (a[mid]==goal) 
		{
			vis[mid]=true; 
			return ;
		}
		if (goal<a[mid]) r=mid;
		else l=mid+1;
	}
}
main()
{
	int N,k;
	memset(vis,0,sizeof(vis));
	scanf("%d%d",&N,&k);
	For(i,0,N) scanf("%I64d",&a[i]);
	sort(a,a+N);
	For(i,0,N) b[i]=a[i]*k;
	int sum=0;
	For(i,0,N) if (!vis[i])
	{
		find(b[i],0,N);
			sum++;
	}
	printf("%d\n",sum);
	return 0;
}
