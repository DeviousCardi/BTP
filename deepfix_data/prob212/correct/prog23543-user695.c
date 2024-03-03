#include <stdio.h>
int main() {
    int birthyear=1236,luckyyear,a,b,c,d,e,f,g;
        a=birthyear%10;
        b=birthyear/10;
        c=b%10;
        d=b/10;
        e=d%10;
        f=d/10;
        g=f%10;
        printf("%d%d%d%d",g,e,c,a);
    return 0; }