#include <stdio.h>
int main() {
    int x1,x2,y1,y2;
    float m;
    scanf("%d %d\n%d %d",&x1,&x2,&y1,&y2);
    float x=y2-y1;
    m=x/x2-x1;
    if(x2-x1==0)
    printf("inf");
    else
    printf("%.2f",m);
    return 0; }