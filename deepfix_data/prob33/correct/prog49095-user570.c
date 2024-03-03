#include <stdio.h>
int main() {
    int h,p,q,i,x,diff;
    scanf("%d",&h);
    scanf("%d",&p);
    diff=0;
    for(i=1;i<=p;i++) {
        scanf("%d",&q); {
           if(diff>q)
            diff=q-diff;
            else if(diff<=q)
            diff=q; }
        x=diff; }
    if((h-x)>0)
    printf("Yes");
    else if((h-x)<=0)
    printf("No");
    return 0; }