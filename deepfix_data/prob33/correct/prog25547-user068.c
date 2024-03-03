#include <stdio.h>
int main() {
    int h,p=0,diff,t=1001,k;
    scanf("%d\n",&h);
    scanf("%d\n",&p);
    for(int i=0;i<p;i++) {
    scanf("%d",&k);
    if((k-t)<0) {
        diff=k-t;
        if(i>0)
        h=h+diff; }
    t=k; }
    if(h>0)
    printf("Yes");
    else
    printf("No");
    return 0; }