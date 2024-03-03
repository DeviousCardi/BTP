#include <stdio.h>
int main(){
    int i,sum=0,n;
    scanf("%d",&n);
    for(i=0;n!=0;i++) {
        sum+=n%10;
        n=n/10; }
    for(i=2016;;i++)
    if(i%sum==0)
    break;
    printf("%d",i);
    return 0; }