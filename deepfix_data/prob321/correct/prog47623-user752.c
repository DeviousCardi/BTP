#include <stdio.h>
int main(){
    int x1,x2;
    int y1,y2;
    float slope;
    scanf("%d  %d",&x1,&y1);
    scanf("%d  %d",&x2,&y2);
    while(x1!=x2){
        slope=(y2-y1)/(x2-x1);
        printf("%.2f",slope);
        break; }
    if(x1==x2){
    printf("inf"); }
    return 0; }