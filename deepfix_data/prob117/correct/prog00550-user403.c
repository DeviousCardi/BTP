#include <stdio.h>
#include <stdlib.h>
int x=0;
int tower(int n,char A,char B ,char C) {
    if(n==1)
  return  x++;
  tower(1,A,B,C);
 tower(n-1,B,C,A);
   return x++; }
int main()
{ int a[25],t,j;
char A,B,C;
scanf("%d\n",&t);
printf("%d",tower(3,A,B,C));
	return 0; }