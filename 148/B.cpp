#include<cstdio>
#include<cstring>
main()
{
	char s[110];
	bool vis[110];
	int reg[20];
	int n,q;
	scanf("%d%d",&n,&q);
	getchar();
	gets(s);
	for (int z=0;z<q;z++)
	{
		int l,r;
		memset(reg,0,sizeof(reg));
		memset(vis,0,sizeof(vis));
		scanf("%d%d",&l,&r);
		char temp[110];
		int le=0;
		for (int i=l-1;i<r;i++)
			temp[le++]=s[i];
		temp[le]='\0';
		int lp=0,rp=1;	
		int last=0;
		bool ex=false;
		while (lp<le && lp>=0)
		{
			if (vis[lp])
			{
				lp+=rp;
				continue;
			}
			if (temp[lp]<='9' && temp[lp]>='0')
			{
				reg[temp[lp]-'0']++;
				temp[lp]--;
				if (temp[lp]=='0'-1)
					vis[lp]=true;
				lp+=rp;
				ex=false;
			}
			else 
			{
				if (temp[lp]=='<') rp=-1;
				else if (temp[lp]=='>') rp=1;
				if (ex) temp[last]=true;
				last=lp;
				lp+=rp;
				ex=true;
			}
		}
		for (int i=0;i<10;i++)
		{
			if (i) putchar(' ');
			printf("%d",reg[i]);
		}
		putchar('\n');
	}
	return 0;
}
