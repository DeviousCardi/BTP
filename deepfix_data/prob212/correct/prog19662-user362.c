#include <stdio.h>
int main(){
    int n,rem,i,y;
    int sum=0;
    scanf("%d",&n);
    while(n!=0) {
            rem=n%10;
            n=n/10;
            sum=sum+rem; }
    for(i=2016;i>=2016;i++) {
            y=i%sum;
            if (y==0) {
            printf("%d",i); }
            break; }
      return 0; }