#include<stdio.h>
int main() {
 int i,j,n;
 scanf("%d",&n);
 for(i=n;i>0;i--) {
      for(j=1;j<=n;j++) {
          if(j<i) {
            printf(" "); }
          else
           printf("%d",j); }
      printf("\n"); } }