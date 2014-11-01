#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<string>
#define pf(i,s,t) for (int (i)=s;(i)<(t);(i)++)
#define mf(i,s,t) for (int (i)=s;(i)<(t);(i)--)
#define mt(a,d) memset((a),(d),sizeof(a))
#define LLD long long
using namespace std;
char s[1000010];
main()
{
	int N;
	cin>>N;
	LLD A=0,G=0;
	int k=0;
	while (N--)
	{
		int a,b;
		cin>>a>>b;
		if (abs(A+a-G)-abs(G+b-A)>0)
			G+=b,s[k++]='G';
		else A+=a,s[k++]='A';
	}
	s[k]='\0';
	puts(s);
	return 0;
}
