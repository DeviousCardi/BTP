#include <stdio.h>
int main() {
    int h,p;
    scanf("%d%d",&h,&p);
    int a,b;
    int i;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=0;i<p-1;i++) {
        if(a>b) {
            h=h-(a-b); }
        a=b;
        scanf("%d",&b); }
    if(h>0)
        printf("Yes");
    else
        printf("No");
    return 0; }