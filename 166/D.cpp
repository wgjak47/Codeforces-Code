#include<cstdio>
#include<cstring>
#include<string>
#include<iostream>
using namespace std;
char s[1600];
char good[30];
bool A[30];
int first[100000],next[1500*1500/2+10];
string data[1500*1500/2+10];
int hash(string & s)
{
	int i,sum=0;;
	for (i=0;i<s.length();i++)
	sum+=(s[i]-'0')*i;
	return sum%99117;
}
int k=0;
int find(string & s)
{
	int i,h=hash(s);
	for (i=first[h];i!=-1;i=next[i])
	{
		if (s==data[i])
		   return i;	
	}
	data[k]=s;
	next[k]=first[h];
	first[h]=k++;	
	return -1;
}
main()
{
	gets(s);
	gets(good);
	memset(first,-1,sizeof(first));
	for (int i=0;i<strlen(good);i++)
		A[i]=good[i]-'0';
	int max;
	scanf("%d",&max);
	int l=strlen(s);
	int ans=0;
	int sum=0;
	for (int i=0;i<l;i++)
	{
		string temp;
		sum=0;
		for (int j=i;j<l;j++)
		{
			if (!A[s[j]-'a']) sum++;
			if (sum>max) break;
			temp.append(1,s[j]);
			if (find(temp)==-1) ans++ ;
		}
	}
	printf("%d\n",ans);
	return 0;
}
