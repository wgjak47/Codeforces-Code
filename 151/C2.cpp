#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<algorithm>
#include<set>
int z=0;
using namespace std;
int n,k;
int a[60];
int stack[60];
set<int> m;
void solve()
{
	for (int i=0;i<n;i++)
	{
		printf("%d %d\n",1,a[i]);
		z++;
		if (z>=k) return ;
	}
	for (int i=2;i<n;i++)
	for (int j=0;j<n-i;j++)
	{

			printf("%d",i);
			for (int ks=j;ks<j+i-1;ks++)
			printf(" %d",a[ks]);	
			printf(" %d",a[n-1]);
			putchar('\n');
	}
}
main()
{
	scanf("%d%d",&n,&k);
	for (int i=0;i<n;i++)
		scanf("%d",&a[i]);
	sort(a,a+n);
	solve();
	return 0;
}
