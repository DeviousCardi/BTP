#include <stdio.h>
int main() {
    int h;
    scanf("%d\n",&h);
    int p;
    scanf("%d\n",&p);
    int i,x,a,b;
    int count;
    int lount=0;
    for(i=0;i<=p;i++) {
        scanf("%d ",&x);
        a=x;
        if(b>a) {
            b=a;
            count=b-a; }
        lount=lount+count; }
    printf("%d",count);
    return 0; }