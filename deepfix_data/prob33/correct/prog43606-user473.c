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
        if(b<a) {
            count=a-b;
        lount=lount+count; }
        a=b; }
    printf("%d",lount);
    if(lount>h) {
        printf("Yes"); }
    else {
        printf("No"); }
    return 0; }