#include <stdio.h>
int main() {
    int h,p,q,i,diff;
    scanf("%d",&h);
    scanf("%d",&p);
    scanf("%d",&q);
    diff=q;
    for(i=2;i<=p;i++) {
        scanf("%d",&q);
        if(diff<=q)
        continue;
        else if(diff>q)
        diff=diff-q; }
    if(h>=diff)
    printf("Yes");
    else if(h<diff)
    printf("No");
    return 0; }