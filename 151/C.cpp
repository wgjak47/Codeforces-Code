#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<set>
int z=0;
using namespace std;
int n,k;
int a[60];
int stack[60];
set<int> m;
bool find;
void dfs(int d,int tot,int j)
{
	if (find) return ;
	if (d==0)
	{
		int sum=0;
		for (int i=1;i<=tot;i++)
			sum+=stack[i];
		if (m.count(sum)<=0) 
		{
		m.insert(sum);
		printf("%d",tot);
		for (int i=1;i<=tot;i++)
			printf(" %d",stack[i]);
		putchar('\n');
		z++;
		if (z>=k) find=true;
		}
		return ;
	}
	else 
	{
		for (int i=j+1;i<n;i++)	
		{
			if (find) return ;
			stack[d]=a[i];
			dfs(d-1,tot,i);
		}
	}
	return ;
}
main()
{
	scanf("%d%d",&n,&k);
	for (int i=0;i<n;i++)
		scanf("%d",&a[i]);
	find=false;
	while (z<k)
	{
		for (int i=1;i<=n;i++)
		{
			dfs(i,i,-1);
			if (z>=k) break;
		}
	}
	return 0;
}
