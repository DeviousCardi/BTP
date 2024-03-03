#include <stdio.h>
int main(){
    int n,sum=0,remainder,x,y;
    scanf("%d\n",&n);
    while(n!=0){
        remainder=n%10;
        sum+=remainder;
        n=n/10; }
    x=n%sum;
    y=sum-x;
    n=n+y;
    printf("%d",n);
    return 0; }