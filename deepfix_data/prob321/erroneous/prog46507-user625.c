#include <stdio.h>
int main(){
    float x1,x2,1,y2;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    float m;
    m=((y2-y1)/(x2-x1));
    if(x2-x1!=0) {
        printf("%.2f",m); }
    else {
        printf("inf"); }
    return 0; }