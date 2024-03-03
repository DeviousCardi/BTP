#include <stdio.h>
#include <stdlib.h>
int x=0;
int tower(int n,char A,char B ,char C)
{  x=x+1;
    if(n==1)
  return  x;
 return (tower(n-1,A,C,B) &&
 tower(n-1,C,B,A)); }
int main()
{ int a,t,j,y=0;
char A,B,C;
scanf("%d\n",&t);
for(j=1;j<=25;j++)
{  y=tower(j,A,B,C)-y;
  a=y;
    printf("%d\n",y); }
	return 0; }