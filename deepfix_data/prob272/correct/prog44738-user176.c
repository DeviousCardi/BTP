#include <stdio.h>
int main() {
    int a1,a2,n,s=0,a,b,d,i;
    scanf("%d %d %d",&a1,&a2,&n);
    if(n==1)
    printf("%d",a1);
    else if(n==2)
    printf("%d",a2);
    else if(n>2) {
        a=a2;
        b=a1;
    for(i=3;i<=n;i++) {
        s=a+b-2;
        d=a;
        a=s;
        b=d; }
    printf("%d",s); }
    return 0; }