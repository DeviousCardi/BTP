#include <stdio.h>
int main(){
    int a1,a2,n,t,i,a,b;
    scanf("%d %d %d",&a1,&a2,&n);
    a=a1;
    b=a2;
    for(i=3;i<=n;i++) {
        t=a+b-2;
        a=b;
        b=t; }
    printf("%d",t);
    return 0; }