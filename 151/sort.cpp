#include<cstdio>
#include<cstring>
main()
{
	int a[50];
	int N;
	scanf("%d",&N);
	for (int i=1;i<=N;i++)
		scanf("%d",&a[i]);
	for (int i=1;i<N;i++)
	for (int j=i;j<N;j++)
		if (a[j]>a[j+1])
		{
			int temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	for (int i=1;i<=N;i++)
	printf("%d ",a[i]);
}
