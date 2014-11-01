#include<stdio.h>
#include<math.h>
main()
{
	int vp,vd,t,f,c;
	scanf("%d%d%d%d%d",&vp,&vd,&t,&f,&c);
	double prinsum=c-vp*t;int reg=0;
	double h;
	if (vp<vd  && prinsum>0)
	{
	while (1)
	{
		h=(double)(c-prinsum)/(vd-vp);
		prinsum-=h*vp;
		if (prinsum<=0) break;
		reg++;
        prinsum-=(h+f)*vp;
		if (prinsum<=0) break;
	}
	printf("%d\n",reg);
	}
	else printf("0\n");
	return 0;
}
