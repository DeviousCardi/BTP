#include <stdio.h>
int main() {
    int x1,x2,y1,y2;
    float slope;
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    if(x1==x2)
    printf("inf");
    if(y1=y2)
    printf("0.00")
    else {
        slope=((float)(y2-y1))/(x2-x1);
        printf("%.2f",slope); }
    return 0; }