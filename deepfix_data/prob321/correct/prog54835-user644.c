#include <stdio.h>
int main() {
    int x1,x2,y1,y2;
    float m;
    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);
    if(x1==x2) {
        printf("inf"); }
    else {
        m=(y2-y1+0.00)/(x2-x1+0.00);
        printf("%.2f",m); }
    return 0; }