#include<iostream>
#include<cstring>
using namespace std;
main()
{
	long long l,r;
	cin>>l>>r;
	long long k=l^r;
	int i;
	for (i=0;i<=64;i++) if ((k>>i)==0) break;
	cout<<(1LL<<i)-1<<endl;;
	return 0;
}
