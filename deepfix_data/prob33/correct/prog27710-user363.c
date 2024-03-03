#include <stdio.h>
int main() {
    int h,p,i,x,y=0,m;
    scanf("%d %d",&h,&p);
    for(i=0;i<p;i++) {
        scanf("%d",&x);
        if((x-y)>0)
        y=x;
        if((x-y)<0) {
           h=h-(y-x);
           y=x; }
        if(h==0)
        break; }
    if(h==0)
    printf("No");
    if(h>0)
    printf("Yes");
    return 0; }