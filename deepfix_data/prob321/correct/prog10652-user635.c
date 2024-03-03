#include <stdio.h>
int main() {
    int x1,x2,y1,y2;
    float m;
    scanf("%d ",&x1);
    scanf("%d\n",&y1);
    scanf("%d ",&x2);
    scanf("%d\n",&y2);
    m = (y2 - y1)/(x2 - x1);
    if(((x1||y1||x2||y2)<=100 && (x1||y1||x2||y2)>=-100)) {
        printf("%.2f",m); }
    if((x2 - x1)==0) {
        printf("inf"); }
    return 0; }