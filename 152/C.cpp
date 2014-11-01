#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
int y1,y2,yw,xb,yb,r;
int cal(double mid)
{
	double k=(yw-yb)/(mid-xb);
	k=-k;
	if (heart+r<y2 && heart-r>y1)
		return 2;
	else if (heart+r>y2) return 0;
	return 1;
}
double mids(double l,double r)
{
	while (l+1e-10<r)
	{
		double mid=(l+r)/2;
		if (cal(mid)==2) return mid; 
		else if (cal(mid)==1) r=mid;
		else l=mid+1e-10;
	}
	return l;
}
main()
{
	scanf("%d%d%d%d%d%d",&y1,&y2,&yw,&xb,&yb,&r);
	double k=mids(0,xb);
	if (cal(k)==2)
	printf("%.10f\n",k);
	else printf("-1\n");
	return 0;
}
