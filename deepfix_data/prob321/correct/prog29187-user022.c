#include <stdio.h>
int main(){
    int i,x1,x2,y1,y2;
    float m,dy,dx;
    scanf("%d %d",&x1,&y1);
    scanf("%d %d",&x2,&y2);
    dy=y2-y1;
    dx=x2-x1;
    if(dx==0)
        printf("inf");
    else {
        m=dy/dx;
        printf("%.2f",m); }
    return 0; }