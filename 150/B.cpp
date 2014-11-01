#include<cstdio>
#include<cstring>
int search(char *s,int i,int j)
{
	int l=strlen(s);
	int a[20];
	memset(a,0,sizeof(a));
	int sum=0;
	for (int i=1;i<l;i++)
	if (i!=0)
	for (int k=0;k<l;k++)
		if (s[k]-'0'<i) break;
		else if (k==l-1) sum--;
	if (j!=0)
	for (int k=0;k<l;k++)
		if (s[k]-'0'<j)	break;
		else if (k==l-1) sum--;
	return sum;
}
int find(char *s,int i)
{
	int l=strlen(s);
	for (int k=0;k<l;k++)
		if (s[k]-'0'<i) return 0;
	return 1;
}
main()
{
	char s[20];
	scanf("%s",s);
	int sum=0;
	int reg=0;
	for (int i=0;i<=9;i++)
	for (int j=i+1;j<=9;j++)
	{
		sum+=search(s,i,j);
		reg++;
	}
	int l=strlen(s);
	int sum0=((1<<l)-2*(l))*reg+(l-1)*9-((1<<l)-2*(l))/2*9+(l==2?0:1);
	for (int i=1;i<=9;i++)
		sum+=find(s,i);	
	if (l!=1) sum+=sum0;
	printf("%d %d\n",sum,sum0);
	return 0;
}
