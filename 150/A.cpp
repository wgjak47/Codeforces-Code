#include<cstdio>
#include<cstring>
main()
{
	int k,n;
	int a[40];
	bool vis[1000];
	memset(vis,0,sizeof(vis));
	scanf("%d%d",&n,&k);
	for  (int i=0;i<k;i++)
	{
		scanf("%d",&a[i]);
		vis[a[i]]=true;
	}
	for (int i=0;i<k;i++)
	{
		int x=1;
		printf("%d",a[i]);
		for (int j=1;j<=k*n;j++)	
		if (!vis[j])
		{
			x++;
			printf(" %d",j);
			vis[j]=true;
			if (x==n)
			   	break;
		}
		putchar('\n');
	}
	return 0;
}
