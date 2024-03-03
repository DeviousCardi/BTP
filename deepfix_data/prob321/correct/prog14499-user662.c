#include <stdio.h>
int main(){
    int x1=0,y1=0;
    int x2=0,y2=0;
    float sl;
    scanf("%d,%d",&x1,&y1);
    scanf("%d,%d",&x2,&y2);
    sl=-(y1-y2)/(x2-x1);
    while(-100<=x1,y1,x2,y2<=100); {
        if(y1=0,y2=0) {
            printf("inf");
        }else {
            printf("%f",sl); } }
    printf("%.2f",sl);
    return 0; }