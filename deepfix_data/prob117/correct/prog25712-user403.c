#include <stdio.h>
#include <stdlib.h>
int x=0;
int tower(int n,char A,char B ,char C) {
    if(n==1)
  return  x++;
  tower(n-1,A,B,C);
 tower(n-1,B,C,A);
   return x++; }
int main()
{ int a[25],t,j;
char A,B,C;
scanf("%d\n",&t);
a[0]=0;
for(j=1;j<25;j++) {
    a[j]=tower(j,A,B,C)-a[j-1];
    printf("%d\n",a[j]); }
	return 0; }