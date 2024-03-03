#include <stdio.h>
int main() {
    float x1;
    scanf("%f ",&x1);
    float y1;
    scanf("%f\n",&y1);
    float x2;
    scanf("%f ",&x2);
    float y2;
    scanf("%f",&y2);
    if(x2-x1!=0) {
        float m;
        m=(y2-y1)/(x2-x1);
        printf("%0.2f",m); }
    else {
        printf("inf"); }
    return 0; }