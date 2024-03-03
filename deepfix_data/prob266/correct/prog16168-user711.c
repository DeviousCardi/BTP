#include <stdio.h>
int main(){
    int n,sum=0,remainder,x,y,z;
    scanf("%d",&n);
    z=n;
    while(n!=0){
        remainder=n%10;
        sum+=remainder;
        n=n/10; }
    x=z%sum;
    y=sum-x;
    z=z+y;
    printf("%d",z);
    return 0; }