#include <stdio.h>
int main() {
    int x1,y1,x2,y2;
    float slope;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    do {
        if(x1!=x2) {
            slope=((y2-y1)/(x2-x1))*1.0;
            printf("%.2f",slope); }
        else {
            printf("inf"); } }
    while((x1>=-100)&&(y2<=100))
    return 0; }