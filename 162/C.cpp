#include<cstdio>
#include<cstring>
using namespace std;
char  s[1000001];
struct list
{
	list *left;
	list *right;
	int num;
};
struct list *head;
struct list *now;
struct list *temp;
int main()
{
	scanf("%s",s);
	int l=strlen(s);	
	head=new list;
	now=head;
	now->num=1;
	now->right=NULL;
	now->left=NULL;
	for (int i=0;i<l-1;i++)
	if(s[i]=='r')
	{
		if (now->right==NULL)
		{
		now->right=new list;
		if (now->right==NULL) break;
		now->right->left=now;
		now=now->right;
		now->num=i+2;
		}
		else 
		{
			temp=new list;	
			if (temp==NULL) break;
			temp->right=now->right;
			now->right->left=temp;
			now->right=temp;
			temp->left=now;
			now=now->right;
			now->num=i+2;
		}
	}
	else 
	{
		if (now->left==NULL)
		{
			now->left=new list;
			if (now->left==NULL) break;
			now->left->right=now;
			head=now->left;
			now=now->left;
			now->num=i+2;
		}
		else 
		{
			temp=new list;	
			if (temp==NULL) break;
			temp->left=now->left;
			now->left->right=temp;
			now->left=temp;
			temp->right=now;
			now=now->left;	
			now->num=i+2;
		}
	}
	for (list *i=head;i!=NULL;i=i->right)
	{
		printf("%d\n",i->num);
//		printf(" %d %d\n",i->right,i->left);
		delete i;
	}
	return 0;
}
//linux正常，ｗｉｎｄｏｗｓ下需要初始化指针
