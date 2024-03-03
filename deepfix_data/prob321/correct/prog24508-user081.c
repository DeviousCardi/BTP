#include <stdio.h>
int main(){
    int x1=0, x2=0, y1=0, y2=0;
    scanf("%d%d", &x1, &y1);
    scanf("%d%d", &x2, &y2);
    if(x1==x2) {
        printf("inf");
        return 0; }
    float slope = (y2-y1)/(x2-x1);
    printf("%0.2f", slope);
    return 0; }