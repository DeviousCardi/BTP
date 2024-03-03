#include <stdio.h>
#include <stdlib.h>
int fact(int r) {
    int i;
for(i=0;i<r;i++){
    r = r*i; }
    return r; }
int B(int n,int k,int b) {
    if(n<k)
    return 0;
    else if(n==0 && k==0)
    return 1;
        else if(k==0)
        return 0;
        else if(b==fact(n)/fact(k)/fact(n-k))
        return b;
    else
    return B(n-1,k,b)+B(n-1,k-1,b); }
int main() {
    int b,n,k;
    scanf("%d%d%d",&b,&n,&k);
    if(B(n,k,b)== b)
    printf("%d %d",n,k);
    else
    printf("-1");
  return 0; }