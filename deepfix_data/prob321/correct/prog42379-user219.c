#include <stdio.h>
int main() {
    int x1,y1,x2,y2;
    float slope;
    scanf("%d %d",&x1,&y1);
    scanf("%d %d",&x2,&y2);
    slope=(y2-y1)/(x2-x1);
    if(x1==0&&x2==0) {
        printf("inf"); }
    else {
        printf("%f",slope); }
    return 0; }