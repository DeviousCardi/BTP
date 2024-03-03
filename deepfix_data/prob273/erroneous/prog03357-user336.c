#include<stdio.h>
int main() {
 int i,j,n;
 scanf("%d",&n);
 for(i=n;i>0;i--) {
      if(i>=(n+1)/2)
      for(j=1;j<=(n+1)/2;j++) {
          if(j<=(i-(n+1)/2)) {
            printf(" "); }
          else
           printf("%d",j); }
      if(ji<(n+1)/2) {
      for(j=1;j<=(n+1)/2;j++) {
          if(j<=((n+1)/2-i)) {
              printf(" "); }
          else
          printf("%d",j) }
      printf("\n"); }
  return 0; }