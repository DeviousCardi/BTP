#include <stdio.h>
#include <stdlib.h>
int B(int n,int k) {
    if(n<k) {
        return 0; }
    else if(k==0) {
        return 1; }
  else
return B(n-1,k)+B(n-1,k-1); }
    int main() {
    int n,k,b;
    scanf("%d",&b);
    for(n=0;n<19;n++)
          for(k=0;k<19;k++)
              if(B(n,k)==b)
printf("%d %d",n,k);
return 0; }