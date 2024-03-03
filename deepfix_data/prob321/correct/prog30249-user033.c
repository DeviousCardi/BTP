#include <stdio.h>
int main(){
    int x1,x2,y1,y2;
    float l;
    scanf("%d %d\n", &x1, &y1);
    scanf("%d %d\n", &x2, &y2);
    if(x1 == x2) {
        printf("inf"); }
    else {
        l = ((y2-y1)/(x2-x1));
        printf("%.2f", l); }
    return 0; }