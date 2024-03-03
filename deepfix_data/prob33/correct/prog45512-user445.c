#include <stdio.h>
int main() {
    int i,p,x,h,j,t;
    scanf("%d\n",&h);
    scanf("%d\n",&p);
    scanf("%d ",&j);
    t=j;
    for(i=1;i<p;i++) {
        scanf("%d ",&x);
        if((x-t)<0) {
            h=h+(x-t); }
        t=x; }
    if(h>0)
    printf("Yes");
    else
    printf("No");
    return 0; }