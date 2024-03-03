#include <stdio.h>
int main() {
    int x1,y1,x2,y2,x,y;
    float slope;
    scanf("%d%d",&x1,&y1);
    scanf("%d%d",&x2,&y2);
    y=y2-y1;
    x=x2-x1;
    if(x==0)
    printf("inf");
    else
    slope=y/x
    printf("%.2f",slope);
    return 0; }