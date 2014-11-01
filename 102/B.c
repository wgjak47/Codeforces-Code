#include<stdio.h>
#include<string.h>
main()
{
	char s[200];
	int i=0,j,k,l,m,n,length;
	scanf("%s",s);
	length=strlen(s);
	for (l=0;l<length;l++)
	if (s[l]=='.')
	break;
	i=l;
	if (s[0]=='-')
	{
		j=(i-1)%3;
		putchar('(');
		putchar('$');
		for (k=1;k<=j;k++)
		putchar(s[k]);
	if (j!=0) if (s[j+1]!='.') if (i>3)	putchar(',');
		n=0;m=0;
		for (k=j+1;k<i;k++)
		{
			n++;
			putchar(s[k]);
			if (n%3==0)
			if (k!=i-1)	putchar (',');
		}
  	
	    putchar('.');
		if (length-i-1>=2)
		for (k=i+1;k<i+3;k++)
			putchar (s[k]);
		else {
		for (k=i+1;k<length;k++)
		{
            m++;
			putchar (s[k]);
		}
			for (k=1;k<=2-m;k++)
			putchar('0');
		}
  
		putchar (')');
		putchar('\n');
	}
	else 
	{
		j=i%3;
		putchar('$');
		for (k=0;k<j;k++)
		putchar(s[k]);
        if (j!=0)		
		if (s[j]!='.')
		if (i>3)
		putchar(',');
		n=0;m=0;
		for (k=j;k<i;k++)
		{
			n++;
			putchar(s[k]);
			if (n%3==0)
			if (k!=i-1)	putchar (',');
		}
	
		putchar('.');
		if (length-i-1>=2)
		for (k=i+1;k<i+3;k++)
			putchar (s[k]);
		else {for (k=i+1;k<length;k++)
		{
            m++;
			putchar (s[k]);}
			for (k=1;k<=2-m;k++)
			putchar('0');
		}
	
		putchar('\n');
	}
	return 0;
}



