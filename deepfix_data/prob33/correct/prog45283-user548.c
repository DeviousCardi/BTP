#include <stdio.h>
int main() {
    int h,p,l,diff=0,past=0,hlost=0,i;
    scanf("%d",&h);
    scanf("%d",&p);
    for(i=1;i<=p;i++) {
        scanf("%d",&l);
        diff=l-past;
        past=l;
        if(diff<0) {
            hlost=hlost + diff; } }
    if(h>hlost)
    printf("Yes");
    else
    printf("No");
    return 0; }