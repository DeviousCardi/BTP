#include <stdio.h>
int main() {
    int h,p,i,x,y=0,m;
    scanf("%d %d",&h,&p);
    for(i=0;i<p;i++) {
        scanf("%d",&x);
        if((x-y)>0)
        y=x;
        if((x-y)<0) {
           m=m-(y-x);
           y=x; }
        if(m==0)
        break; }
    if(m==0)
    printf("No");
    else
    printf("Yes");
    return 0; }