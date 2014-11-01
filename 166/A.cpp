#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
main()
{
	int as;
	int a[10];
	scanf("%d",&as);
	int i;
	for (i=as+1;i<10000;i++)
	{
		bool find=true;
		a[0]=i/1000;
		a[1]=i/100%10;
		a[2]=i/10%10;
		a[3]=i%10;
		sort(a,a+4);
		for (int i=0;i<=2;i++)
			if (a[i]==a[i+1])
			{
				find=false;	break;
			}
		if (find) break;
	}
	printf("%d\n",i);
	return 0;
}
