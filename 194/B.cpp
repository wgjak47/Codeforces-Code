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
bool check(int *c,int k,int key)
{
	for (int i=0;i<k;i++)
		if (c[i]==key)
			return false;
	return true;
}
bool vis[12];
main()
{
	int x[12],y[12];
	int a[12],b[12];
	for (int i=0;i<8;i++)
		scanf("%d%d",&x[i],&y[i]);
	int k=0;
	for (int i=0;i<8;i++)
	{
		if (k==0) a[k++]=x[i];
		else if (check(a,k,x[i])) a[k++]=x[i];
	}
	bool ans=true;
	if (k!=3)
		ans=false;
	else 
	{
		sort(a,a+3);
		k=0;
		for (int i=0;i<8;i++)
		{
			if (k==0) b[k++]=y[i];
			else if (check(b,k,y[i])) b[k++]=y[i];
		}
		if (k!=3)
			ans=false;
		else 
		{
			sort(b,b+3);
			for (int i=0;i<3;i++)
			for (int j=0;j<3;j++)
			{
				if (i==1 && j==1) continue;
					bool found=false;
					for (int l=0;l<8;l++)
						if (a[i]==x[l] && b[j]==y[l] && !vis[l])
						{
							vis[l]=true;
							found=true;
							break;
						}
					if (!found) ans=false;
			}
		}
	}
	printf("%s\n",ans==true?"respectable":"ugly");
	return 0;
}
