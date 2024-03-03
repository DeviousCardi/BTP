#include <stdio.h>
int main() {
    int h,p,i,plat,temp=-1;
    scanf("%d %d",&h,&p);
    for(i=0;i<p;i++) {
        scanf("%d",&plat);
        if(plat<temp) {
            h=h-(temp-plat); }
        temp=plat; }
    if(h>0)
    printf("Yes");
    else
    printf("No");
    return 0; }