#include <stdio.h>
int main(){
    int x1,x2,y1,y2;
    scanf("%d  %d\n%d  %d",&x1,&y1,&x2,&y2);
    float (y2-y1);
    float (x2-x1);
    float m = (y2-y1/x2-x1);
    if(x2==x1){
        printf("inf"); }
    else{
        printf("%.2f",m); }
    return 0; }