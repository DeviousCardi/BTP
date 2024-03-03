#include <stdio.h>
int main() {
    int x1,x2,y1,y2;
    double m;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    if((x2-x1)!=0) {
         m=((double)(y2-y1))/((double)(x2-x1));
        printf("%.2lf",m); }
    else
    if((y2-y1)!=0)
    printf("inf");
    return 0; }