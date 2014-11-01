#include<cstdio>
#include<cstring>
int tree[100001];
main()
{
	int N;
	scanf("%d",&N);
	for (int i=0;i<N;i++)
		scanf("%d",&tree[i]);
	int sum=0;
	int now=0;
	for (int i=0;i<N;i++)
	{
		if (now<tree[i])
		{
			sum+=tree[i]-now+2;
			now=tree[i];
		}
		else if (now>tree[i])
		{
			sum+=now-tree[i]+2;
			now=tree[i];
		}
		else sum+=2;
	}
	printf("%d\n",sum-1);
	return 0;
}
