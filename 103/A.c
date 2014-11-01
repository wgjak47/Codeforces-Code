#include<stdio.h>
main()
{
   int a[1000];
   int  i,j,n,k,l,m,max=-1,min,maxl=0,minl=0;
   scanf("%d",&n);
   for (i=0;i<n;i++)
   scanf("%d",&a[i]);
   min=a[n-1];
   minl=n-1;
   for (i=0;i<n;i++) 
   if (a[i]>max) { max=a[i];maxl=i;}
   for (i=n-1;i>=0;i--)
   if (a[i]<min) {min=a[i];minl=i;}
   if (maxl>minl) maxl--;
   printf("%d\n",maxl+n-minl-1);
   return 0;
}
