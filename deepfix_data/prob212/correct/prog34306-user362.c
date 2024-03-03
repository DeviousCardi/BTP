#include <stdio.h>
int main(){
    int n,rem,i,y;
    int sum=0;
    scanf("%d",&n);
    while(n!=0) {
            rem=n%10;
            n=n/10;
            sum=sum+rem; }
    y=2016;
    while(1) {
        if (y%sum == 0) {
            printf("%d",y);
            break; }
        y++; }
    return 0; }