#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
main()
{
	string s;
	cin>>s;
	int l=1,r=s.size();
	int data[r+10];
	for (int i=0;i<s.size();i++)
		if (s[i]=='l')
			data[r--]=i+1;
		else data[l++]=i+1;
	for (int i=1;i<=s.size();i++)
		printf("%d\n",data[i]);
}
