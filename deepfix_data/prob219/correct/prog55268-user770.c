#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c,e;
    scanf("%d %d %d",&a,&b,&c );
    if(a>=b && b>=c)
    e=c;
    else if(b>=a && a>=c)
    e=a;
    else
    e=c;
    printf("%d", e);
    return 0; }