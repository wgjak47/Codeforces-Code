#include<cstdio>
#include<cstring>
#include<cstdlib>
int N;
long long reg[14];
int max=0;
void print()
{
	int i=9;
	int sum=0;
	for (int i=1;i<=9;i++) 
		sum+=reg[i];
	if (sum>0)
	while (i>=0)
	{
		if (reg[i]>0)
		{printf("%d",i);
			reg[i]--;}
		if (reg[i]==0) i--; 
	}
	else printf("0\n");
}
main()
{
	bool exist=false;
	scanf("%d",&N);
	memset(reg,0,sizeof(reg));
	for (int i=0;i<N;i++)
	{
		int temp;
		scanf("%d",&temp);
		if (temp==0) exist=true;
		reg[temp]++;
		max+=temp;
	}
	if (!exist) {printf("-1\n");return 0;}
	else 
	{
		if (max%3==0) 
			print();
		else 
		{
			if (max%3==1) 
			{
				if (reg[1]>=1)
				reg[1]--; 
				else if (reg[4]>=1)
				reg[4]--;
				else if (reg[7]>=1)
				reg[7]--;
				else if (reg[2]>1) reg[2]-=2;
				else if (reg[2]>0 && reg[5]>0) reg[2]--,reg[5]--;
				else if (reg[5]>1) reg[5]-=2;
				else if (reg[2]>0 && reg[8]>0) reg[2]--,reg[8]--;
				else if (reg[5]>0 && reg[8]>0) reg[5]--,reg[8]--;
				else if (reg[8]>1) reg[8]-=2;
				else 
				{
					printf("-1\n");
					return 0;
				}
			}
			else if (max%3==2)
			{
				if (reg[2]>=1) reg[2]--;
				else if (reg[5]>=1) reg[5]--;
				else if (reg[8]>=1) reg[8]--;
				else if (reg[1]>=2) reg[1]-=2;
				else if (reg[1]>=1 && reg[4]>=1) reg[1]-=1,reg[4]-=1;
				else if (reg[4]>=2) reg[4]-=2;
				else if (reg[1]>=1 && reg[7]>=1) reg[1]-=1,reg[7]-=1;
				else if (reg[4]>=1 && reg[7]>=1) reg[4]-=1,reg[7]-=1;
				else if (reg[7]>=2) reg[7]-=2;
				else {printf("-1\n");return 0;}
			}
			else {printf("-1\n");return 0;}
			print();
		}
	}
}
