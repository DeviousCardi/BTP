#include <stdio.h>
int main() {
    int a1,a2,an,an1,an2,i,n;
    scanf("%d %d %d",&a1,&a2,&n);
    an2=a1;
    an1=a2;
    for(i=3;i<=n;i++) {
        an=an1+an2-2;
        an2=an1;
        an1=an; }
    printf("%d",an);
    return 0; }