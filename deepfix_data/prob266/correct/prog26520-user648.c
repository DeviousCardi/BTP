#include <stdio.h>
int main(){
    int i,n,s=0;
    scanf("%d",&n);
    while(n!=0) {
        s=s+n%10;
        n=n/10; }
    i=n+1;
    while(i%s!=0) {
        i=i+1;
        printf("%d ",i); }
    return 0; }