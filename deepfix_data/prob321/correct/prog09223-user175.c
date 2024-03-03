#include <stdio.h>
int main(){
    int x1,y1,x2,y2;
    float m;
    scanf("%f  %f\n%f  %f",&x1,&y1,&x2,&y2);
    if((x2-x1)!=0) {
        m=(y2-y1)/(x2-x1);
        printf("%.2f",m); }
    else
    printf("inf");
    return 0; }