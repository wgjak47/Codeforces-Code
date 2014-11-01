#include<stdio.h>
#include<math.h>
main()
{
	int a[200]={0};
	int x,y,_a,b;
	int i,j,k,n,d;
	int flag=0,sum=0;
	scanf("%d%d%d",&n,&_a,&b);
	if (_a!=0) 
	{
	x=3;y=2;d=(n-b)/_a;
	for (i=0;i<n-b;i++)
	{
		if ((i+1)%d==0 && i!=0)
			a[i]=x++;
		else 
		{
			if (flag==0)
			a[i]=y--; 
			else a[i]=y++;
			flag=!flag;
		}
		sum+=a[i];
	}
	}
	else 
	{
	for (i=0;i<n-b;i++)
		a[i]=1;
	}
	for (i=n-b;i<n;i++)
	{
		a[i]=++sum;
		sum+=a[i];
	}
	for (i=0;i<n;i++)
	if (i!=n-1)	printf("%d ",a[i]);
	printf("%d",a[i-1]);
	return 0;
}
