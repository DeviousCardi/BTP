#include <stdio.h>
int main() {
    int x1,y1,x2,y2,x,y;
    float slope;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    y=y2-y1;
    x=x2-x1;
    if(y==0)
    printf("inf");
    else
    printf("%.2f",y/x);
    return 0; }