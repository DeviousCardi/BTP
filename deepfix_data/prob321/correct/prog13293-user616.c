#include <stdio.h>
#include <math.h>
int main(){
    int x1,x2,y1,y2;
    scanf("%d %d",&x1,&y1);
    scanf("%d %d",&x2,&y2);
    if((x2-x1)==0) {
        printf("inf"); }
    else {
        float m=(y2-y1)/(x2-x1);
        printf("%.2f",m); }
    printf("%d %d%",x1,y1,x2,y2);
    return 0; }