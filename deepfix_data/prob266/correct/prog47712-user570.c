#include <stdio.h>
int main() {
    int i,n,x,m,sum=0;
    scanf("%d",&n);
    for(i=n;i!=0;) {
        m=i%10;
        sum=sum+m;
        i=i/10; }
    for(x=2016;;x++) {
        printf("%d",x);
        break; }
    return 0; }