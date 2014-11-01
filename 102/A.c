#include<stdio.h>
main()
{
  int flag=1;
  int i,j,k,l,m,n;
  int r1,r2,c1,c2,d1,d2;
  scanf("%d%d",&r1,&r2);
  scanf("%d%d",&c1,&c2);
  scanf("%d%d",&d1,&d2);
  for (i=1;i<10;i++)
  for (j=1;j<10;j++)
  for (l=1;l<10;l++)
  for (k=1;k<10;k++)
  {
   if (i+j==r1&&k+l==r2 && i+k==c1 && j+l==c2 && i+l==d1 && j+k==d2)
   if (i==j || j==l || l==k || i==l || i==k || j==k);
   else
   {
   printf("%d %d\n%d %d\n",i,j,k,l);
   return 0;
  }
  }
  printf("-1\n");
  return 0;
}

   
