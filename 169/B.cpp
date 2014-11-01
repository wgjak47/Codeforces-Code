#include<cstdio>
#include<cstring>
int num[30];
main()
{
	char s[1100];
	memset(num,0,sizeof(num));
	gets(s);
	int l=strlen(s);
	for (int i=0;i<l;i++)
		num[s[i]-'a']++;
	int sum=0;
	for (int i=0;i<26;i++)
		if (num[i]%2==1) sum++;
	if (sum%2==1 || sum==0) 
		printf("First\n");
	else printf("Second\n");
	return 0;
}
