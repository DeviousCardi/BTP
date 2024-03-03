#include <stdio.h>
int main() {
    int x1,y1,x2,y2;
    scanf("%d %d\n%d %d",&x1,&y1,&x2,&y2);
    double s;
    if(x1!=x2) {
    s=((double)(y2-y1))/(x2-x1);
    printf("%.2lf",s); }
    else
    printf("inf");
    return 0; }