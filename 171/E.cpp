#include<cstdio>
#include<cstring>
#define min(a,b) a<b?a:b
main()
{
	int a=0,b=1;
	char c;
	while (1)
	{
		c=getchar();
		if (c=='\n' || c==EOF) break;
		if (c=='0') 
			b=(min(a,b))+1;
		else 
			a=(min(a,b))+1;
	}
	printf("%d\n",a);
	return 0;
}
