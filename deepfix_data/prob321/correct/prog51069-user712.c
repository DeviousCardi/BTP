#include <stdio.h>
int main() {
    int x1,x2,y1,y2;
    float slope;
    scanf("%d",&x1);
    scanf("%d",&y1);
    scanf("%d",&x2);
    scanf("%d",&y2);
    if(x1==x2)
    printf("inf");
    else {
        slope = 1.0*(y2-y1)/(x2-x1);
        printf("%0.3f",slope); }
    return 0; }