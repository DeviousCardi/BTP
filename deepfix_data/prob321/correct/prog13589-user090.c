#include <stdio.h>
int main(){
    float x1,y1,x2,y2,slope ;
    scanf("%f%f",&x1,&y1);
    scanf("%f%f",&x2,&y2);
    slope=(y2-y1)/(x2-x1) ;
    if(x2==x1&&y2!=y1) {
        printf("inf"); }
    if(y2==y1) {
        printf("0.00"); }
    else {
        printf("%.2f",slope); }
    return 0; }