#include <stdio.h>
int main() {
    int h,p,i,a,b;
    scanf("%d\n",&h);
    scanf("%d\n",&p);
    scanf("%d ",&a);
    for(i=2;i<=p;i++) {
        scanf("%d",&b);
        if(b<a) {
            h=h-(a-b);
            a=b;
            if(h==0) {
                printf("No"); } }
        else
        a=b; }
    if(h>0) {
        printf("Yes"); }
    return 0; }