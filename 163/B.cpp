#include<cstdio>
#include<cstring>
main()
{
	int n,t;
	scanf("%d%d",&n,&t);
	getchar();
	char s[100];
	gets(s);
	for (int j=0;j<t;j++)
	for (int i=0;i<n-1;i++)
	{
		if (s[i]=='B' && s[i+1]=='G')
		{
			char temp=s[i];
			s[i]=s[i+1];
			s[i+1]=temp;
			i++;
		}
	}
	puts(s);
}
