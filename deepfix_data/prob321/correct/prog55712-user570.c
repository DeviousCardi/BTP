#include <stdio.h>
int main() {
    int x1=-100;
    int y1=-100;
    int x2=-100;
    int y2=-100;
    float m;
    scanf("%d %d",&x1,&y1);
    scanf("%d %d",&x2,&y2);
    while(((x1<=100)&&(y1<=100))&&((x2<=100)&&(y2<=100))) {
        m=(y2-y1)/(x2-x1); }
    if(((x2>x1)&&(y2>y1))||((x2<x1)&&(y2<y1)))
    printf("%.2f",m);
    else if(x2==x1)
    printf("inf");
    return 0; }