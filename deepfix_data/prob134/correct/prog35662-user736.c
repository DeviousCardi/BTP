#include <stdio.h>
#include <stdlib.h>
int B(int n,int k) {
    if(n<k)
        return 0;
    else if(n==0 && k==0)
        return 1;
    else if(k==0)
        return 0;
    else
        return B(n-1,k)+B(n-1,k-1); }
int main() {
    int b,n,k,l;
    scanf("%d",&b);
    for(n=0;n<=20;n++) {
        for(k=0;k<20;k++) {
            if(b==B(n,k)) {
                l=1;
                break; }
            if(l==1) {
                printf("%d %d",n,k);
                break; } } }
  return 0; }