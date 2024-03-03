#include <stdio.h>
int main(){
    int a1,a2,n,t,i,b,c;
    scanf("%d %d %d",&a1,&a2,&n);
    b=a1;
    c=a2;
    for(i=3;i<=n;i++) {
        t=c+b-2;
        b=c;
        c=t; }
    printf("%d",t);
    return 0; }