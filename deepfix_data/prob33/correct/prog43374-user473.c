#include <stdio.h>
int main() {
    int h;
    scanf("%d\n",&h);
    int p;
    scanf("%d\n",&p);
    int i,x,a,b;
    int count;
    for(i=0;i<=p;i++) {
        scanf("%d ",&x);
        a=x;
        b=a;
        if(b>a) {
            count=b-a;
            count++; } }
    printf("%d",x);
    return 0; }