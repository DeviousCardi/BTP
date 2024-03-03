#include <stdio.h>
int main() {
    int x1,x2,y1,y2;
    scanf("%d %d/n",&x1,&y1);
    scanf("%d %d/n",&x2,&y2);
    float m;
    m=(y2-y1)/(x2-x1);
    if(x1==x2&&y1!=y2) {
        printf("inf"); }
    else {
        printf("%.2f",m); }
    return 0; }