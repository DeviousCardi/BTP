#include <stdio.h>
int main() {
    int n,t1,t2,t3;
    scanf("%d",&n);
    t1=n%10;
    n=n/10;
    t2=n%10;
    n=n/10;
    t3=n%10;
    n=n/10;
    printf("%d",t1+t2+t3+n);
    return 0; }