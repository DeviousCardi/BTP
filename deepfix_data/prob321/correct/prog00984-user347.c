#include <stdio.h>
int main() {
    int x1,x2,y1,y2;
    scanf("%d %d",&x1,&y1);
    scanf("%d %d",&x2,&y2);
    float X1=x1,X2=x2;
    if(X2==X1) {
        printf("inf"); }
    else {
    float f=(y2-y1)/(X2-X1);
    printf("%.2f",f); }
return 0; }