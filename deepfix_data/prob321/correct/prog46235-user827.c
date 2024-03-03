#include <stdio.h>
int main() {
    int x1,y1,x2,y2,k;
    scanf("%d  %d\n%d  %d",&x1,&y1,&x2,&y2);
    float m;
    if(x1==x2) {
        printf("inf"); }
    else {
        m=(y1-y2)/(x1-x2)*2.00;
        printf("%.2f",m); }
    return 0; }