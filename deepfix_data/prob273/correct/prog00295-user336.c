#include<stdio.h>
int main() {
 int i,j,n;
 scanf("%d",&n);
 for(i=n;i>0;i--) {
      for(j=1;j<=(n+1)/2;j++) {
          if(j<i) {
            printf(" "); }
          else
           printf("%d",j); }
      printf("\n"); }
  return 0; }