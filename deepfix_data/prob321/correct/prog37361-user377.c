#include <stdio.h>
int main(){
    int x1,y1,x2,y2;
    float slope;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    if(x1==x2) {
        printf("inf");
        return 0; }
    else {
        slope==(y2-y1)/(x2-x1);
        printf("%.2f\n"); }
    return 0; }