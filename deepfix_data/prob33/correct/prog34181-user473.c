#include <stdio.h>
int main() {
    int h;
    scanf("%d\n",&h);
    int p;
    scanf("%d\n",&p);
    int i,a,b;
    int count;
    int lount=0;
    scanf("%d",&a);
    for(i=1;i<=p;i++) {
        scanf("%d ",&b);
        if(b>a) {
            count=b-a;
        lount=lount+count; }
        a=b; }
    printf("%d",lount);
    return 0; }