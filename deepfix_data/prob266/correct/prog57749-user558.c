#include <stdio.h>
int main() {
    int n,t1,t2,t3,s,j,i;
    scanf("%d",&n);
    t1=n%10;
    n=n/10;
    t2=n%10;
    n=n/10;
    t3=n%10;
    n=n/10;
    s=t1+t2+t3+n;
    if(n%s==0){
    j=n;
    for(i=2016;i<=j;i++) {
        printf("%d",j); } }
    return 0; }