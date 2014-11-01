#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
#define min(a,b) a>b?b:a
int key[100010];
main()
{
	int N;
	scanf("%d",&N);
	key[4]=50;
	for (int i=5;i<100010;i++)
		key[i]=key[i-1]*10%210;	
	if (N<3) printf("-1\n");
	else 
	{
		if (N==3) printf("210\n");
		else 
		{
			int k=key[N],reg=0;
			while (k) {reg++;k/=10;}
			putchar('1');
			for (int i=1;i<N-reg;i++)
				printf("0");
			printf("%d\n",key[N]);
		}
	}	
	return 0;
}
