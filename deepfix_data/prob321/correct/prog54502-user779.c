#include <stdio.h>
int main(){
    int x1,y1,x2,y2;
    float d;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    if((x1==x2)&&((x1!=0)&&(x2!=0))){
        printf("inf"); }
    else{
        d=(y2-y1)/(x2-x1);
        printf("%.2f",d); }
    return 0; }