#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int ma[10010],mb[10010],mr[10010];
int a[10010],b[10010],r[10010];
int order[10010];
int max(int a,int b)
{
	return a>b?a:b
}
int min(int a,int b)
{
	return a<b?a:b;
}
int cmp(int x,int y)
{
	if (r[x]!=r[y]) return r[x]<r[y];
	if (a[x]!=a[y]) return a[x]<a[y];
	 return b[x]<b[y];
}
main()
{
	int x0,y0,x1,y1;	
	scanf("%d%d%d%d",&x0,&y0,&x1,&y1);
	int N;
	scanf("%d",&N);
	for (int i=0;i<N;i++)
		scanf("%d%d%d",&r[i],&a[i],&b[i]),order[i]=i;
	sort(order,order+N,cmp);
	for (int i=0;i<N;i++)
		printf("%d%d%d\n",r[order[i]],a[order[i]],b[order[i]]);
	for (int i=0;i<N;i++)
		ma[i]=1000000001;
	int k=0;
	for (int i=1;i<N;i++)
		if (r[order[i]]==r[order[i-1]])
		{
			mr[k]=r[order[i]];
			ma[k]=min(min(a[order[i]],a[order[i-1]]),ma);
			mb[k]=max(max(b[order[i]],b[order[i-1]]),mb);
		}
		else k++;
	int l0,l1;
	for (int i=0;i<k;i++)
	{
		if (mr[i]==x0) l0=i;
		if (mr[i]==x1) l1=i;
	}
	if (l1-l0!=x1-x2 || y1<ma[l1] || y1 > mb[l1] || y0<ma[l0] || y0>mb[l0])
	{
		printf("-1\n");
		return 0;
	}	
	return 0;
}
