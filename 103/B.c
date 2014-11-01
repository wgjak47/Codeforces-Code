#include<stdio.h>
#include<math.h>
int x[1010],y[1010],r[1010];
int n;
int judge(int a, int b)
{
	int i;
   for (i=0;i<n;i++)
	 if ((a-x[i])*(a-x[i])+(b-y[i])*(b-y[i])<=r[i]*r[i])
		 return 0;
   return 1;
}
main()
{ 
	int xa,ya,xb,yb,reg=0;;
	double s,w,e;
	int i,j,k,l,m;
	scanf("%d%d%d%d",&xa,&ya,&xb,&yb);
	scanf("%d",&n);
	for (i=0;i<n;i++)
		scanf("%d%d%d",&x[i],&y[i],&r[i]);
	if (xb>xa) for (i=xa;i<=xb;i++) 
	{
		if (judge(i,yb)) reg++;
		if (judge(i,ya)) reg++;
 	}
	else for (i=xb;i<=xa;i++)
 	{
		if (judge(i,yb)) reg++;

		if (judge(i,ya)) reg++;

	}
    if (yb>ya)	for (i=ya+1;i<yb;i++)
 	{
		if (judge(xa,i)) reg++;

		if (judge(xb,i)) reg++;

	}
	else for (i=yb+1;i<ya;i++)
 	{
		if (judge(xa,i)) reg++;

		if (judge(xb,i)) reg++;

 	}
    printf("%d\n",reg);
    return 0;
}
