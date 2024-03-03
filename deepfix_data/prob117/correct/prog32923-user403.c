#include <stdio.h>
#include <stdlib.h>
int x=0;
int tower(int n,char A,char B ,char C) {
    if(n==1)
  return  x++;
  tower(n-1,A,C,B);
 tower(n-1,B,A,C);
   return x++; }
int main()
{ int a[25],t,j;
char A,B,C;
scanf("%d\n",&t);
printf("%d",tower(3,A,B,C));
	return 0; }