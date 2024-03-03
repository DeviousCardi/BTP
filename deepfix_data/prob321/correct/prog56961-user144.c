#include <stdio.h>
int main(){
    int x1,y1;
    int x2,y2;
    float slop;
    scanf("%d%d",&x1,&y1);
    scanf("%d%d",&x2,&y2);
    if(x2-x1==0){
        printf("inf"); }
    else{
        slop=(y2-y1)/(x2-x1);
        printf("%.2f",slop); }
    return 0; }