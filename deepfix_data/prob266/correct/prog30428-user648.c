#include <stdio.h>
int main(){
    int i,n,s=0;
    scanf("%d",&n);
    while(n!=0) {
        s=s+n%10;
        n=n/10; }
    printf("%d",s);
    i=n+1;
    while(i%s==0)
    i=i+1;
    return 0; }