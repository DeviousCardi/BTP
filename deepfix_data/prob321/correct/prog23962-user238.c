#include <stdio.h>
int main() {
    int x1,x2,y1,y2;
    float m;
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    if(x1>=-100 && x1<=100 &&x2>=-100 && x2<=100 &&y1>=-100 && y1<=100 &&y2>=-100 && y2<=100 ) {
    if(x1==x2) {
        printf("inf"); }
    else {
        m=((float)(y2-y1))/(x2-x1);
        printf("%.2f",m); } }
    return 0; }