#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;
struct change{
    int kind,x,y;
}ans[100010];
const int maxn=1010;
int n,hx[maxn],x[maxn],y[maxn],h[maxn];
int main(){
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
        h[i]=n+1;
    for (int i=1;i<n;i++){
        scanf("%d%d",&x[i],&y[i]);
        hx[x[i]]=1;
    }
    int len=0;
    for(int i= 1;i<=n;++i) if(hx[i])
        for(int j=n;j>i;--j) if(!hx[j]){
            len++;ans[len].kind=1;ans[len].x=i;ans[len].y=j;
            hx[j]=1;hx[i]= 0;
            for (int k= 1;k<n;++k)
                if  (x[k]==i)   x[k]= j;
            break;
        }
    for (int i=1;i<n;i++)   h[y[i]]=min(h[y[i]],x[i]);
    for (int i=1;i<n;i++){
        int pos=i;
        for (int j=i+1;j<=n;j++)
            if  (h[pos]>h[j])   pos=j;
        if  (i!=pos){
            swap(h[i],h[pos]);
            len++;
            ans[len].kind=2;ans[len].x=i;ans[len].y=pos;
        }
    }
    printf("%d\n",len);
    for (int i=1;i<=len;i++)
        printf("%d %d %d\n",ans[i].kind,ans[i].x,ans[i].y);
    return  0;
}
