#include<cstdio>
#include<cstring>
bool notp[190010];
int pr[100000],pn=0;;
void getprimer()
{
	pn=0;
	memset(notp,0,sizeof(notp));
	for (int i=2;i<190000;i++)
	{
		if (!notp[i]) pr[pn++]=i;
		for (int j=0;j<pn && pr[j]*i<190000;j++)
		{
			notp[pr[j]*i]=1;
			if (i%pr[j]==0) break;
		}
	}
	notp[0]=notp[1]=1;
}
int find(int ans)
{
	int l=0,r=pn;
	while (l<r)
	{
		int mid=(l+r)/2;
		if (pr[mid]>ans) r=mid;
		else l=mid+1;
	}
	return pr[l]-ans;
}
int data[550][550];
main()
{
	int M,N;
	getprimer();
	scanf("%d%d",&M,&N);
	for (int i=0;i<M;i++)
	for (int j=0;j<N;j++)
		scanf("%d",&data[i][j]);
	int min=100000000;
	int sum;
	for (int i=0;i<M;i++)
	{
		sum=0;
		for (int j=0;j<N;j++)
		if (notp[data[i][j]])
		{
			sum=sum+find(data[i][j]);
//			printf("%d\n",find(data[i][j]));
//			putchar('\n');
		}
		if (min>sum) min=sum;
	}
	for (int i=0;i<N;i++)
	{
		sum=0;
		for (int j=0;j<M;j++)
		if (notp[data[j][i]])
			sum=sum+find(data[j][i]);
		if(min>sum) min=sum;
	}
	printf("%d\n",min);
}


