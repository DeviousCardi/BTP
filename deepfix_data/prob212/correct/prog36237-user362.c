#include <stdio.h>
int main(){
    int n,rem;
    int x=0,y=0;
    int sum=0;
    scanf("%d",&n);
    while(n!=0) {
            rem=n%10;
            n=n/10;
            sum=sum+rem; }
    while(x>=n) {
            y=x/n;
            y==0; }
        printf("%d",x);
      return 0; }