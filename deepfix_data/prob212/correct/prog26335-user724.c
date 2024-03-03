#include <stdio.h>
int main() {
    int n,i,k,sum=0;
    scanf("%d",&n);
    while(n!=0) {
        k=n%10;
        n=n/10;
        sum=sum+k; }
    for(i=2016;   ;i++) {
        if(i%sum==0)
        break; }
    printf("%d",i);
    return 0; }