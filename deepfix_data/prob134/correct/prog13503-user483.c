#include <stdio.h>
#include <stdlib.h>
int B(int n,int k) {
    if(n<k) {
        return 0; }
    else if((n==0&&k==0)||k==0) {
        return 1;}
  else
return B(n-1,k)+B(n-1,k-1); }
    int main() {
    int n,k,b;
    scanf("%d",&b);
    if(b<0) {
        printf("-1"); }
    for(n=0;n<19;n++)
          for(k=0;k<19;k++)
              if(b==B(n,k))
 printf("%d %d",n,k);
 else
 printf("-1");
return 0; }