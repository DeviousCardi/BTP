#include <stdio.h>
int main(){
    int x1,x2,y1,y2;
    scanf("%d  %d",&x1,&y1);
    scanf("%d  %d",&x2,&y2);
    float slope=(y2-y1)/(x2-x1);
    if(x1==x2) {
        printf("inf"); }
    else
        printf("%.2f",slope);
    return 0; }