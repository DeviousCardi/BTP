#include <stdio.h>
int main(){
    int sum,n,r,i;
    scanf("%d",&n);
    r=1;
    sum=0;
    while(r!=0) {
        r=n%10;
        sum=sum+r;
        n=(n-r)/10;
    }printf("%d ",sum);
    for(i=2016;i>0;i++) {
        if(i%sum==0) {
            break; }
        else {
            continue; } }
    printf("%d",i);
    return 0; }