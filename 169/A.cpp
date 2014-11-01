#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int fun[10011],times[10011];
main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	int max=-1000000001;
	for (int i=0;i<n;i++)
	{
		scanf("%d%d",&fun[i],&times[i]);
		if (times[i]>k) fun[i]-=times[i]-k;
		if (fun[i]>max) max=fun[i];
	}
	printf("%d\n",max);
	return 0;
}
