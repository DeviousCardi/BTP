#include <stdio.h>
int main() {
    int x1,x2,y1,y2;
    float slope;
    scanf("%d %d\n",&x1,&y1);
    scanf("%d %d",&x2,&y2);
    if(x2!=x1) {
    slope=((float)(y2-y1))/(x2-x1);
    printf("%.2f",slope); }
    else
    {printf("inf");}
    return 0; }