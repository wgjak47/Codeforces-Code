#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<string>
#define pf(i,s,t) for (int (i)=s;(i)<(t);(i)++)
#define mf(i,s,t) for (int (i)=s;(i)>(t);(i)--)
#define mt(a,d) memset((a),(d),sizeof(a))
#define LLD long long
using namespace std;
main()
{
	char s[110];
	vector<int> z;
	scanf("%s",s);
	int l=strlen(s);
	for (int i=0;i<l;i++)
		if (s[i]>='0' && s[i]<='9')
			z.push_back(s[i]-'0');
	sort(z.begin(),z.end());
	printf("%d",z[0]);
	for (int i=1;i<z.size();i++)
		printf("+%d",z[i]);
	putchar('\n');
	return 0;
}
