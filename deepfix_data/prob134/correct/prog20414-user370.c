#include <stdio.h>
#include <stdlib.h>
int binomial(int n, int k) {
    if(n<k)
    return 0;
    if(n==0&&k==0)
    return 1;
    if(k==0)
    return 1;
    return binomial(n-1,k)+binomial(n-1,k-1); }
int main() {
    int i,j,f=0,b,c;
    scanf("%d",&b);
    for(i=0;i<=20;i=i+1) {
        for(j=0;j<=i/2+1;j=j+1) {
          c=binomial(i,j);
        if(b==c) {
            f=1;
            break; } }
      if(f==1)
      break; }
    if(f==1)
    printf("%d %d",i,j);
	return 0; }