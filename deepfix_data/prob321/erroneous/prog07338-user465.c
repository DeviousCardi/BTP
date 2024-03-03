#include <stdio.h>
int main(){
    float slope;
    int x1,y1,x2,y2;
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    if(x1==x2)
        printf("inf");
    else if(y1==y2)
        printf("%f",0.00)
    else {
        slope=(y1-y2)/(x1-x2);
        printf("%.2f",slope); }
    return 0; }