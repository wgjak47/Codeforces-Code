#include<stdio.h>
#include<string.h>
main()
{
	char s1[1000],s2[1000],s3[1000];
	int i,j,k,l1,l2,l3,m,n,flag=0;
	gets(s1);
	gets(s2);
	gets(s3);
	l1=strlen(s1);
	l2=strlen(s2);
	l3=strlen(s3);
	for (i=0;i<l1;i++)
	for (j=0;j<=l3;j++)
	{
	if (s1[i]==s3[j])
	{
		s3[j]=' ';
		break;
	}
	
	if (j==l3) flag=1;
	}
	for (i=0;i<l2;i++)
	for (j=0;j<=l3;j++)
	{
	if (s2[i]==s3[j])
	{
		s3[j]=' ';
		break;
	}
	if (j==l3) flag=1;
	}
	j=0;
	for (i=0;i<=l3;i++)
	if (s3[i]!=' ') s3[j++]=s3[i];
	if (strlen(s3)!=0 ) printf("NO\n");
   else if (flag!=1) printf("YES\n");
   else printf("NO\n");
return 0;
}

