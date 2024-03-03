#include <stdio.h>
int main(){
    int x1,y1,x2,y2;
    float slope;
    scanf("%d %d\n",&x1,&y1);
    scanf("%d %d",&x2,&y2);
    if(-100<=x1<=100 && -100<=y1<=100 && -100<=x2<=100 &&-100<=y2<=100) {
        if(x2==x1&&y2!=y1)
            printf("inf");
        else if(x1==x2&&y1==y2)
            printf("same points");
        else {
            slope=(float)(y2-y1)/(x2-x1);
            printf("%.2f",slope); } }
    return 0; }