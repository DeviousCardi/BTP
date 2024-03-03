#include <stdio.h>
int main(){
    int x1,y1,x2,y2;
    float s;
    scanf("%d ",&x1);
    scanf("%d\n",&y1);
    scanf("%d ",&x2);
    scanf("%d",&y2);
    if(y2-y1==0) {
        printf("inf"); }
    else {
        s=((float)x2-x1)/(y2-y1);
        printf("%.2f",s); }
    return 0; }