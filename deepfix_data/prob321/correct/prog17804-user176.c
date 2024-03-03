#include <stdio.h>
int main(){
    int x1,y1;
    int x2,y2;
    float a1,a2,b1,b2;
    float slope;
    scanf("%d %d",&x1,&y1);
    scanf("%d %d",&x2,&y2);
    if(x1==x2) {
        printf("inf"); }
    else if(y2==y1) {
        printf("0.00"); }
    else {
        a1=(float)x1;
        b1=(float)y1;
        a2=(float)x2;
        b2=(float)y2;
        slope=(b2-b1)/(a2-a1);
        printf("%.2f",slope); }
    return 0; }