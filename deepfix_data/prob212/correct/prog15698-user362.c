#include <stdio.h>
int main(){
    int n,rem,i,y;
    int sum=0;
    scanf("%d",&n);
    while(n!=0) {
            rem=n%10;
            n=n/10;
            sum=sum+rem; }
    for(i=0;i>=2016;i++) {
           y=i/sum;
            y=0;
            break; }
        printf("%d",i);
      return 0; }