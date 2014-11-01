#include<cstdio>
#include<cstring>
#include<cstdlib>
int in[300];
main()
{
	int N,K;
	scanf("%d%d",&N,&K);
	for (int i=1;i<=2*N+1;i++)
		scanf("%d",&in[i]);
	int reg=0;
	for (int i=1;i<=2*N+1;i++)
	{
		if (reg==K) break;
		if (i==1)
		{
			if (in[i]-1>in[i+1])
			{
				in[i]--;
				reg++;
			}
		}
		else if (in[i]-1>in[i+1] && in[i]-1>in[i-1])
			{
				in[i]--;
				reg++;
			}
	}
	for (int i=1;i<=2*N+1;i++)
	{
		if (i!=1) putchar(' ');
		printf("%d",in[i]);
	}
	putchar('\n');
	return 0;
}
