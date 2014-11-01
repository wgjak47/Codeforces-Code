#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<algorithm>
#include<iostream>
#include<cstdlib>
#define For(i,s,t) for (int i=t;i<s;i++)
using namespace std;
char sub[12002][22];
char clean[12002][22];
bool vis[12002];
int cmp(const void *a,const void *b)
{
	char *x=(char *)a;
	char *y=(char *)b;
	if (strlen(x)==strlen(y))
	return strcmp(x,y);
	return strlen(x)-strlen(y);
}
void deal(char *s)
{
	int l=strlen(s)-1;
	bool allz=true;
	for (int i=0;i<=l;i++) if (s[i]!='z') allz=false;
	if (allz) s[l+1]='a',s[l+2]='\0';
	else 
	while (1)
	{
		s[l]++;
		if (s[l]=='z'+1) 
		{
			s[l]='a';
			l--;
		}	
		else break;
	}
}
main()
{
	char s[32][22];
	int n;
	scanf("%d",&n);
	getchar();
	for (int i=0;i<n;i++)
		gets(s[i]);
	int o=0;
	for (int i=0;i<n;i++)
	{
		int l=strlen(s[i]);
		int z;
		for (int j=0;j<l;j++)
		for (int k=j;k<l;k++)
		{
			z=0;
			for (int m=j;m<=k;m++)
			sub[o][z++]=s[i][m];
			sub[o++][z]='\0';
		}
	}
	qsort(sub,o,sizeof(sub[0]),cmp);
	if (strcmp(sub[0],"a")!=0)
	{
		printf("a\n");
		return 0;
	}
	for (int i=0;i<o-1;i++)
		if (strcmp(sub[i],sub[i+1])==0)
			vis[i]=true;
	int f=0;
	for (int i=0;i<o;i++)
		if (!vis[i]) 
		{
			strcpy(clean[f],sub[i]);
			//puts(clean[f]);
			f++;
		}
	strcpy(clean[f],"");
	for (int i=0;i<f;i++)
	{
		int ll=strlen(clean[i]);
		deal(clean[i]);
		if (strcmp(clean[i],clean[i+1])<0 || i==f-1)
		{
			printf("%s\n",clean[i]);
			break;
		}
	}
	return 0;
	
}
