#include <stdio.h>
int main() {
    int x1,y1;
    int x2,y2;
    float m;
    scanf("%d %d",&x1,&y1);
    scanf("%d %d",&x2,&y2);
    m=((y2-y1)/(x2-x1).0);
    if((x2-x1)!=0) {
        printf("%.2f",m); }
    else if((x2-x1)==0) {
        printf("inf"); }
    return 0; }