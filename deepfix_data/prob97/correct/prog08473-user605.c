#include <stdio.h>
#include <stdlib.h>
int main() {
  int b,h,i,j,m,k,a;
    scanf("%d%d",&b,&h);
    k=b-2;
    a=h-2*(b-1);
    for(i=1;i<=b;i++) {
    for(j=0;j<=k;j++) {
    printf(" "); }
	for(m=1;m<=a;m++) {
	printf("*"); }
	k=k-1,a=a+2;
	printf("\n"); }
   return 0; }