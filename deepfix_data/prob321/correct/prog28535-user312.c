#include <stdio.h>
int main() {
    int x1,y1,x2,y2;
    scanf("%d ",&x1);
    scanf("%d\n",&y1);
    scanf("%d ",&x2);
    scanf("%d",&y2);
    float a=y2-y1;
    float b=x2-x1;
    float m=a/b;
    if(b==0) {
        printf("inf"); }
    else {
        printf("%.2f",m); }
return 0; }