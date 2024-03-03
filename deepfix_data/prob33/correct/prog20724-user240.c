#include <stdio.h>
int main() {
    int h,a,b,i,p;
    scanf("%d\n",&h);
    scanf("%d\n",&p);
    scanf("%d",&a);
    for(i=1;i<p;i++) {
        scanf("%d",&b);
        if(b<a) {
            h=h+b-a;
        };
        a=b;
        if(h<=0) {
            printf("No");
        };
    };
    if(h>0) {
        printf("Yes"); }
    return 0; }