#include <stdio.h>
int main(){
    int x1,x2,y1,y2;
    float slope;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    if(x2-x1==0) {
        printf("inf"); }
    else {
        slope=((x2-x1)*1.00/(y2-y1));
        printf("%.2f",slope); }
    return 0; }