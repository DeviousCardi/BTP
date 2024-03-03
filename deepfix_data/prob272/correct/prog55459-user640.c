#include <stdio.h>
int main() {
    int i,a1,a2,n,a,b,c;
    scanf("%d %d %d",&a1,&a2,&n);
    b=a2;
    c=a1;
    for (i=3;i<=n;i++) {
        a=c+b-2;
        c=b;
        b=a; }
    printf("%d",b);
    return 0; }