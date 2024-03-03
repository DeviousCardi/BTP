#include <stdio.h>
int main(){
    int x1,y1,x2,y2;
    float slope;
    scanf("%d",&x1);
    scanf("%d",&y1);
    scanf("%d",&x2);
    scanf("%d",&y2);
    if((x2-x1)!=0) {
        slope=(y2-y1)/(x2-x1);
        printf("%.2f",slope); }
    else {
        printf("inf"); }
    return 0; }