#include <stdio.h>
int main() {
    int i,n,x,m,sum=0;
    scanf("%d",&n);
    for(i=n;i!=0;i/10) {
        m=i%10;
        sum=sum+m; }
    for(x=2016;;x++) {
        if(x%sum==0)
        break; }
    printf("%d",x);
    return 0; }