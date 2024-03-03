#include <stdio.h>
#include <stdlib.h>
int cat(int n) {
    float k;
    if(n==0)
    return 1;
    else {
      k=(2.0*(2*n-1)/(n+1))*cat(n-1);
      return k; } }
int main() {
    int i,t,k,count=0,j;
    scanf("%d\n",&t);
    for(i=0;i<t;i++) {
        scanf("%d\n",&k);
        for(j=0;j<17;j++) {
          if(cat(j)==k){
            printf("yes\n");
            count=1;
            break; } }
         if(count=0)
         printf("no\n"); }
	return 0; }