#include<cstdio>
#include <cstring>
#include<iostream>
#include<algorithm>
using namespace std;
#define MAXLEN 210000
#define LL(X) (X)<<1
#define RR(X) ((X)<<1)+1
struct Node{
    int l,r;
    int num;
}nodes[4*MAXLEN];
int buildTree(int l,int r,int n){
    nodes[n].l=l;
    nodes[n].r=r;
    nodes[n].num=0;
    if(l==r){
        return nodes[n].num = 0;
    }
    int mid=(l+r)>>1;
    return nodes[n].num =buildTree(l,mid,LL(n))+buildTree(mid+1,r,RR(n));
}
int updata(int l,int r,int n,int num){
    if(nodes[n].l==l && nodes[n].r==r){
        return nodes[n].num +=1;
    }
    if(l>=nodes[RR(n)].l)
        return nodes[n].num =updata(l,r,RR(n),num)+nodes[LL(n)].num;
    else if(r<=nodes[LL(n)].r)
        return nodes[n].num =updata(l,r,LL(n),num)+nodes[RR(n)].num;
    else {
        return nodes[n].num =updata(l,nodes[LL(n)].r,LL(n),num)+updata(nodes[RR(n)].l,r,RR(n),num);
    }
}
int a[210000]; 
int main()
{
	int n,q;
	scanf("%d%d",&n,&q);
	for (int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	for (int i=0;i<n;i++)
	{
		int l,r;
		scanf("%d%d",&l,&r);
	}
}
