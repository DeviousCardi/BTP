#include <stdio.h>
int main(){
    int a1,a2,n,t,i,b,c;
    scanf("%d %d %d",&a1,&a2,&n);
    b=a1+a2-2;
    c=a2+b-2;
    for(i=5;i<=n;i++) {
        t=b+c-2;
        printf("%d",t);
        c=t;
        b=c; }
    return 0; }