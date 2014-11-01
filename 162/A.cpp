#include<cstdio>
#include<cstring>
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b
#define FOR(i,n) for (int (i)=0;(i)<(n);(i)++)
main()
{
	char  instruct[50];
	char  t[50];
	scanf("%s",instruct);
	scanf("%s",t);
	int j=0;
	for (int i=0;i<strlen(t);i++)
		if (t[i]==instruct[j]) j++;
	printf("%d\n",j+1);
	return 0;
}
