#include <stdio.h>
int main() {
    int n,t,a,b,i;
    i=1;
    t=0;
    scanf("%d %d %d",&a,&b,&n);
    do {
        t=t+i-2;
        i=t+2; }
    while(i<=n);
    printf("%d",i);
    return 0; }