#include <stdio.h>
#include <stdlib.h>
int B(int n,int k) {
    if(n<k)
    return 0;
    else if(n==0&&k==0)
    return 1;
    else if(k==0)
    return 1;
    else return B(n-1,k)+B(n-1,k-1); }
int main() {
 int b,n,k,i;
 scanf("%d",&b);
 for(n=0;n<=20;n++) {
     for(k=0;k<=20;k++) {
         if(B(n,k)==b)
         break; }
      if(B(n,k)==b)
         break; }
 if(n==21&&k==21)
 printf("-1");
 else printf("%d %d",n,k);
	return 0; }