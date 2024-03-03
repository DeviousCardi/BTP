#include <stdio.h>
#include <stdlib.h>
int x=0;
int tower(int n,char A,char B ,char C)
{  x=x+1;
    if(n==1)
 return x;
tower(n-1,A,C,B);
tower(n-1,C,B,A) ; }
int main()
{ int a,t,j=1,y=0;
char A,B,C;
scanf("%d\n",&t);
while(j>0,j<=25)
{y=tower(j,A,B,C);
    printf("%d\n",y);j++; }
	return 0; }