#include<cstdio>
#include<cstring>
main()
{
	int N;
	int max=0,min=1000000010;
	int maxf=0,minf=0;
	scanf("%d",&N);
	int k=-2;	
	for (int i=0;i<N;i++)	
	{
		int l,r;
		scanf("%d%d",&l,&r);
		if (l<=min && r>=max)
		{
			k=i;
			min=l;max=r;
			maxf=max,minf=min;
		}
		else if (l<min) min=l,k=-2;
		else if (r>max) max=r,k=-2;
		else if (l>=minf && r<=maxf) ;
		else k=-2;
	}
	printf("%d\n",k+1);
}
