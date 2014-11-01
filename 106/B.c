#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
main()
{
	int sum,g,temp,no[300]={0};
	int i,j,k,l,m,n,mid,mid2;
	int res,or;
	char s[1000];
	scanf("%s",s);
	i=0;l=strlen(s);
	while (1) if (s[i++]==':') break;
    mid=i-1;
	for (j=0;j<mid-1;j++)
		if (s[j]!='0') break;
	k=0;
	for (i=j;i<=mid;i++)
		s[k++]=s[i];
	mid2=k-1;
	for (j=mid+1;j<l-1;j++)
		if (s[j]!='0') break;
	for (i=j;i<=l;i++)
		s[k++]=s[i];
	l=strlen(s);
	res=1;
	for (i=0;i<l;i++)
	{
		if (s[i]==':') continue;
		if (isdigit(s[i]))
		temp=s[i]-'0';
		if (s[i]>='A' && s[i]<='Z')
		temp=s[i]-'A'+10;
		if (res<temp) res=temp;
	}	
	or = res;
	if (l==3)
	{
		if (isdigit(s[0]) || 'A'<=s[0] && s[0]<'O') 
		{
			printf("-1");
				return 0;
		}
	}
	while (no[res]==0)
	{ 
		res++;
		sum=0;
		for (i=0;i<mid2;i++)
		{
			if (isdigit(s[i]))
			{
				temp=s[i]-'0';
				sum=sum*res+temp;
			}
			else if(s[i]>='A' && s[i]<='Z')
			{
				temp=s[i]-'A'+10;
				sum=sum*res+temp;
			}
		}
		if (sum>=24) no[res]=1;
		sum=0;
		for (i=mid2+1;i<l;i++)
		{
			if (isdigit(s[i]))
			{
				temp=s[i]-'0';
				sum=sum*res+temp;
			}
			else if(s[i]>='A' && s[i]<='Z')
			{
				temp=s[i]-'A'+10;
				sum=sum*res+temp;
			}
		}
		if (sum>=60) no[res]=1;
	}

	if (or+1>=res) putchar('0');
	else
	for (i=or+1;i<res;i++) 
	{
		printf("%d",i);
		if (i!=res-1) putchar(' ');
	}
return 0;
}	
