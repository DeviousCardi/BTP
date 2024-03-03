#include <stdio.h>
int main(){
    int x1,x2;
    int y1,y2;
    int slope;
    int X,Y;
    scanf("%d  %d",&x1,&y1);
    scanf("%d  %d",&x2,&y2);
    Y=y2-y1;
    X=x2-x1;
    while(y1!=y2){
        slope=Y/X;
        printf("%.2d",slope); }
    if(x1==x2){
    printf("inf"); }
    return 0; }