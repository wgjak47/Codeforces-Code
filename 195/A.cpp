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
    int x,y;
    scanf("%d%d",&x,&y);
    int z=abs(x)+abs(y);
    if (x>0 && y>0)
    {
        printf("0 %d %d 0",z,z);
    }
    else if (x<0 && y>0)
    {
        printf("-%d 0 0 %d",z,z);
    }
    else if (x>0 && y<0)
    {
        printf("0 -%d %d 0",z,z);
    }
    else printf("-%d 0 0 -%d",z,z);
	return 0;
}
