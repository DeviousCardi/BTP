#include <stdio.h>
int main() {
    int x1,y1,x2,y2;
    float m;
    scanf("%d%d/n",&x1,&y1);
    scanf("%d%d",&x2,&y2);
    if(x2-x1==0)
    printf("inf");
    if(x2!=x1) {
    m=(float)((float)y2-(float)y1)/(float)((float)x2-(float)x1);
    printf("%.2f",m); }
    return 0; }