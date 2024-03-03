#include <stdio.h>
int main(){
    int x1,x2,y1,y2;
    float slope;
    int xdiff=x1-x2;
    float x_diff=x1-x2;
    float y_diff=y1-y2;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    if (xdiff==0) {
        printf("inf"); }
    else {
        slope=y_diff/x_diff;
        printf("%.2f",slope); }
    return 0; }