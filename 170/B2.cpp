#include<cstdio>
#include<cstring>
bool find(char *s,char *t)
{
	int ls=strlen(s);
	int lt=strlen(t);
	for (int i=0;i<=ls-lt;i++)
	{
		bool found=true;
		for (int j=0;j<lt;j++)
			if (s[i+j]!=t[j]) 
			{
				found=false;
				break;
			}
		if (found==true) return found;
	}
	return false;
}
main()
{
	char s[33][22];
	int N;
	scanf("%d",&N);
	getchar();
	for (int i=0;i<N;i++) 
	gets(s[i]);
	for (char j='a';j<='z';j++)
	{
		char t[2];
		t[0]=j,t[1]='\0';
		bool found=false;;
		for (int i=0;i<N;i++) 
		{
			if (find(s[i],t)) {found=true;break;}
		}
		if (!found) {printf("%c\n",j);return 0;}
	}
	for (char j='a';j<='z';j++)
	for (char k='a';k<='z';k++)
	{
		char t[3];
		t[0]=j,t[1]=k,t[2]='\0';
		bool found=false;
		for (int i=0;i<N;i++) 
		{
			if (find(s[i],t))
			{
				found=true;
				break;
			}
		}
		if (!found) {puts(t);return 0;}
	}
	return 0;
}
