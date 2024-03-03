#include <stdio.h>
int main() {
    int h,p,q,i,diff;
    scanf("%d",&h);
    scanf("%d",&p);
    diff=0;
    for(i=1;i<=p;i++) {
        scanf("%d",&q);
        if(diff>=q)
        diff=q-diff;
        else if(diff<q)
        diff=q; }
    if(h>=diff)
    printf("Yes");
    else if(h<diff)
    printf("No");
    return 0; }