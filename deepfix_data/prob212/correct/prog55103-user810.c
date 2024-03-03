#include <stdio.h>
int main() {
int i,n,m,sum=0,t;
scanf("%d",&n);
for(i=0;i<=n;i++) {
        t=n%10;
        sum=sum+t;
        n=n/10; }
for(i=2016; ;i++) {
        if(i%sum==0) {
            printf("%d",i); } }
    return 0; }