#include <stdio.h>
int main() {
    int x1,x2,y1,y2;
    float m;
    scanf("%d %d\n%d %d",&x1,&y1,&x2,&y2);
    if(x1==x2) {
        printf("inf"); }
    else {
        m=((float)(y2-y1))/(x2-x1);
        printf("%.2f",m); }
    return 0; }