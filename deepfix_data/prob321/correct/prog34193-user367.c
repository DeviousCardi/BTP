#include <stdio.h>
int main(){
    int y1, x1,y2,x2;
    float slope;
    scanf("%d %d\n%d %d",&y1,&x1,&y2,&x2);
    if((y2-y1)==0)
    printf("inf");
    else {
        slope=(x2-x1)/(y2-y1);
        printf("%.2f",slope); }
    return 0; }