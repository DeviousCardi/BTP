#include <stdio.h>
int main(){
    int n,r,y,sum=0;
    scanf("%d",&n);
    for(;n!=0;) {
        r=n%10;
        sum=sum+r;
        n=n/10; }
    for(y=2016;;y++) {
        if(y%sum==0)
            break; }
    printf("%d",y);
    return 0; }