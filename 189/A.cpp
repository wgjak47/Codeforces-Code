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
	char c;
	int k=0;
	bool ok=true;
	while ((c=getchar())!=EOF)
	{
		if (c=='\n') break;
		if (c=='1' && k==0) k++;
		else if (c=='4' && k==1) k++;
		else if (c=='4' && k==2) k++;
		else if (k==1 && c=='1') k=1;
		else if (k==2 && c=='1') k=1;
		else if (k==3 && c=='1') k=1;
		else ok=false;
	}
	if (ok) printf("YES\n");
	else printf("NO\n");
	return 0;
}
