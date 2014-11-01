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
    LLD a,b;
    cin>>a>>b;
    while (a%2) 
    {
        a++;
    }
    if (a+2 <= b)
    {
        cout<<a<<' '<<a+1<<' '<<a+2<<endl;
    }
    else 
    {
        cout<<-1<<endl;
    }
	return 0;
}
