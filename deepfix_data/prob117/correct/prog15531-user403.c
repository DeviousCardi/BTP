#include <stdio.h>
#include <stdlib.h>
int x=0;
int tower(int n,char A,char B ,char C)
{  x=x+1;
    if(n==1)
 return x;
tower(n-1,A,C,B);
tower(n-1,C,B,A); }
int main()
{   int a[10],i,n;
    char A,B,C;
    scanf("%d",&n);
    for(i=1;i<=5;i++)
    { a[i]=tower(n,A,B,C);}
  for(i=1;i<=5;i++)
  printf("%d\n",a[i]);
	return 0; }