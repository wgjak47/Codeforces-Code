#include<cstdio>
#include<cstring>
main()
{
	int N;
	int temp;
	int sum=0;
	scanf("%d",&N);
	for (int i=0;i<N;i++)
	{
		scanf("%d",&temp);	
		sum+=temp;	
	}
	if (sum/N*N==sum) printf("%d\n",N);
	else 
	printf("%d\n",N-1);
	return 0;
}
