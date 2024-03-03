#include <stdio.h>
int main(){
    int x1,y1,x2,y2;
    float d;
    scanf("%d %d",&x1,&y1);
    scanf("%d %d",&x2,&y2);
    if((-100<=(x1&&x2&&y1&&y2)<=100)&&(((x2-x1)!=0)&&((y2-y1)!=0))){
    else{
        d=(y2-y1)/(x2-x1);
        printf("%.2f",d); } }
    else{
    if((x2-x1)==0){
    printf("inf"); } }
    return 0; }