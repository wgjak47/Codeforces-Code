#include<cstdio>
#include<cstring>
#include<cmath>
main()
{
	int n;
	scanf("%d",&n);
	int k;
	int sum=0;
	for (int i=0;i<=9;i++)
	for (int j=i+1;j<=9;j++)
	{
		k=n;
		int z=0,reg=0;
		while (k!=0)
		{
			if (k%10!=i && k%10!=j)
			reg=reg+k%10*pow(8,z);
			k/=10;
			z++;
		}	
		printf("%d\n",n-reg);
		sum+=n-reg;
	}
	printf("%d",sum);
	return 0;
}
