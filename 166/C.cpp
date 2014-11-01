#include<cstdio>
#include<cstring>
int fx[1000010];
main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	if (n/k<3) 
	{
		printf("-1\n");
		return 0;
	}
	bool used=false;
	int z=0;
	int max=n/(k*2)*(k*2);
	for (int i=0;i<max;i++)
	{
		fx[i]=z+1;
		if (used) {used=false;z=(z+1)%k;}
		else 
		used=true;
	}	
	z=0;
	for (int i=max;i<n;i++)
	{
		fx[i]=z+1;
		z=(z+1)%k;
	}
	for (int i=0;i<n-1;i++)
		printf("%d ",fx[i]);
	printf("%d\n",fx[n-1]);
	return 0;
}
