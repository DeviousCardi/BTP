#include <stdio.h>
int main(){
    int sum,n,r,i;
    scanf("%d",&n);
    r=1;
    sum=0;
    while(n!=0) {
        r=n%10;
        sum=sum+r;
        n=n/10; }
    for(i=2016;i>0;i++) {
        if(i%sum==0) {
            break; } }
    printf("%d",i);
    return 0; }