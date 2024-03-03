#include <stdio.h>
int main() {
    int h,p,i,x,y=0;
    scanf("%d %d",&h,&p);
    for(i=0;i<p;i++) {
        scanf("%d",&x);
        if((x-y)>0) {
            y=x; }
        if((x-y)<0) {
           h=h-(y-x);
           y=x; }
        else
        break; }
    if(h==0)
    printf("No");
    else
    printf("Yes");
    return 0; }