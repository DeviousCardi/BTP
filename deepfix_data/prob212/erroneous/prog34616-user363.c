#include <stdio.h>
int main(){
    int r,n,s=0,i,t;
    scanf("%d",&n);
    for(;n!=0;n=n/10) {
        r=n%10;
        s=s+r; }
    for(i=2016;i<=2100;i++) {
        t=i%s;
        if(t==0)
        break; }
    printf(%d,i);
    return 0; }