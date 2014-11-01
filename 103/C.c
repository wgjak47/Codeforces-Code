#include<stdio.h>
#include<string.h>
char s[100010];
char sn[100010];
int cmp(const void *a ,const void *b)
{
	return *(char *)a-*(char *)b;
}
main()
{ 
	int i,j,k,l,m,n;
	fgets(s,sizeof (s),stdin);
	fgets(sn,sizeof(sn),stdin);
	if (strlen(s)<strlen(sn)) 
	{
		printf("0");
		return 0;
	}
    qsort(sn,strlen(sn),sizeof(char),cmp);
	puts(sn);
	return 0;
}


