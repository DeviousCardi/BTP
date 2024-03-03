#include <stdio.h>
#include <stdlib.h>
int x=0;
int tower(int n,char A,char B ,char C)
{  x=x+1;
    if(n==1)
  return  x;
  tower(n-1,A,C,B);
 tower(n-1,C,B,A); }
int main()
{ int a[25],t,j;
char A,B,C;
scanf("%d\n",&t);
printf("%d\n",tower(3,A,B,C));printf("%d",tower(3,A,B,C));
	return 0; }