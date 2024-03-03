#include <stdio.h>
int main() {
    int h,p,i,x,t,k=0;
    scanf("%d",&h);
    scanf("%d",&p);
    scanf("%d",&x);
    for(i=1;i<p;i++){
        t=x;
        scanf("%d",&x);
        printf("%d %d\n",x,t); }
    return 0; }