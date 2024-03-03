#include <stdio.h>
int main() {
    int a1,a2,an,an1,an2,i;
    scanf("%d %d %d",&a1,&a2,&n);
    an2=a1;
    an1=a2;
    for(i=1;i<=n;i++) {
        an=an+a2-2;
        an-2=an-1;
        an-1=an; }
    printf("%d",an);
    return 0; }