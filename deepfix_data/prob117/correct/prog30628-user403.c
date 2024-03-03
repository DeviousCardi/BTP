#include <stdio.h>
#include <stdlib.h>
int x=0;
int tower(int n,char A,char B ,char C)
{ x=x+1;
    if(n==1)
  return x;
  tower(n-1,A,B,C);
 tower(n-1,B,C,A); }
int main()
{ int t,i,a,k,y;
char A,B,C;
scanf("%d\n",&t);
   printf("%d",tower(1,A,B,C));
	return 0; }