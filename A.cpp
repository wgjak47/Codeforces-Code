#include<stdio.h>
#include<string.h>
int a[60];
int b[60];
bool judge(int i,int j)
{
	int temp=b[j]/a[i];
	if (temp*a[i]==b[j])
		return true;
	return false;
}
main()
{
	int N,M;
	scanf("%d",&N);
	for (int i=0;i<N;i++)
	scanf("%d",&a[i]);
	scanf("%d",&M);
	for (int i=0;i<M;i++)
		scanf("%d",&b[i]);
	int max=0;
	for (int i=0;i<N;i++)
	for (int j=0;j<M;j++)
		if (judge(i,j) && max<b[j]/a[i])
			max=b[j]/a[i];	
	int reg=0;
	for (int i=0;i<N;i++)
	for (int j=0;j<M;j++)
		if (judge(i,j) && max==b[j]/a[i])
		 reg++;	
	printf("%d\n",reg);
	return 0;
}
