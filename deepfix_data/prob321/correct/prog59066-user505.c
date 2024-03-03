#include <stdio.h>
int main(){
    int x1=0,y1=0,x2=0,y2=0;
    float slope;
    (x1,y1)!=(x2,y2);
    -100<=x1 && y2<=100;
    scanf("%d  %d",&x1  ,&y1);
    scanf("%d  %d",&x2  ,&y2);
    slope=(y2-y1)/(x2-x1);
    if (y2==y1||x2==x1) {
        printf("inf"); }
    else {
        printf("%.2f",slope); }
    return 0; }