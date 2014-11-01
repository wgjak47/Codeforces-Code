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
const bool is_min=true;
const bool is_max=false;
void read_question(int &num,bool & statu)
{
    char sign[2];
    int value;
    char answer;
    sign[0]=getchar();
    sign[1]=getchar();
    scanf("%d",&value);
    char blank=getchar();
    while(blank==' ') blank=getchar();
    answer=blank;
    switch(sign[0])
    {
        case '>':
            if (sign[1]==' ')
            {
                if (answer=='Y')
                {
                    num=value+1;
                    statu=is_min;
                }
                else 
                {
                    num=value;
                    statu=is_max;
                }
            }
            else
            {
                if (answer=='Y')
                {
                    num=value;
                    statu=is_min;
                }
                else 
                {
                    num=value-1;
                    statu=is_max;
                }
            }
            break;
        case '<':
            if (sign[1]==' ')
            {
                if (answer=='Y')
                {
                    num=value-1;
                    statu=is_max;
                }
                else 
                {
                    num=value;
                    statu=is_min;
                }
            }
            else
            {
                if (answer=='Y')
                {
                    num=value;
                    statu=is_max;
                }
                else 
                {
                    num=value+1;
                    statu=is_min;
                }
            }
            break;
    }
    getchar();
}
main()
{
    int Min=-1e9-10,Max=1e9+10;
    int N;
    scanf("%d",&N);
    getchar();
    for (int i=0;i<N;i++)
    {
        bool statu;
        int num;
        read_question(num,statu);
        if (statu==is_min)
            Min=max(Min,num);
        else Max=min(Max,num);
    }
 //   printf("%d %d\n",Max,Min);
    if (Max>=Min) printf("%d",Max);
    else printf("Impossible\n");
	return 0;
}
