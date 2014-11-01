#include<cstdio>
#include<cstring>
#include<cstdlib>
#define a x[0]
#define b x[1]
#define c x[2]
int cmp(const void *aa,const void *bb)
{
	return *(int *)aa-*(int *)bb;
}
int x[4];
main()
{
	scanf("%d%d%d",&a,&b,&c);
	qsort(x,3,sizeof(int),cmp);
	int sum=0;
	while (a>0 && b>0 && c>0)
	{
		if (a==1)
			sum+=b*c;
		else 
			sum+=(a+b+c)*2-6;
		a--;
		b--;
		c--;
	}
	printf("%d\n",sum);
}
