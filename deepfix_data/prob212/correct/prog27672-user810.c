#include <stdio.h>
int main() {
int i,n,sum=0,t;
scanf("%d",&n);
while(n!=0) {
        t=n%10;
        sum=sum+t;
        n=n/10; }
for(i=2016; ;i++) {
        if(i%sum==0) {
            printf("%d",i);
            break; } }
    return 0; }