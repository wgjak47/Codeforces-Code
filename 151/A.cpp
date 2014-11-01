#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<algorithm>
#define max(a,b) a>b?a:b;
#define min(a,b) a>b?b:a;
using namespace std;
main()
{
	int N;
	scanf("%d",&N);
	if (N==1 || N==2) {printf("-1\n");return 0;}
	else 
	{
		printf("99 100");
		for (int i=1;i<=N-2;i++)
			printf(" %d",i);
		putchar('\n');
	}
	return 0;
}
