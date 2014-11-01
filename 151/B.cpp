#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
using namespace std;
long long a[100200];
main()
{
	int N;
	scanf("%d",&N);
	long long sum=0;
	for (int i=0;i<N;i++)
	{
		cin>>a[i];
		a[i]+=10000;
		sum+=a[i];
	}
	sort(a,a+N);
	long long ave=sum/N;
	long long last=sum-ave*N;
	int kill=0;
	int k=N-1;
	while (last>0)
	{
		last-=a[k];
		k--;kill++;
	}
	printf("%d\n",N-kill);
	return 0;	
}
