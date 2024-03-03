#include <stdio.h>
int main(){
    int x1 , y1 ;
    int x2 , y2 ;
    scanf("%d %d\n",&x1,&y1);
    scanf("%d %d",&x2,&y2);
    if (((x1<=100 && x1>=-100) && (x2<=100 && x2 >=-100)) &&
        ((y1<=100 && y1>=-100)&&(y2<=100 && y2 >= -100))) {
    float a = (y2 - y1)*1.0 ;
    float b = (x2 - x1)*1.0  ;
    if (b==0) {printf("inf");}
    else {
        float c = a/b ;
        printf("%.2f",c); } }
    return 0; }