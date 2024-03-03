#include <stdio.h>
int main(){
    int x1,y1,x2,y2;
    scanf("%d%d",&x1,&y1);
    scanf("%d%d",&x2,&y2);
    float m=(y2-y1)/(x2-x1);
    if(x2==x1){
        if((x1>=-100)&&(x1<=100)){
            if((x2>=-100)&&(x2<=100)){
                if((y1>=-100)&&(y1<=100)){
                   if((y2>=-100)&&(y2<=100)){
                     printf("inf"); } } } } }
    else if(x2!=x1){
           if((x1>=-100)&&(x1<=100)){
               if((x2>=-100)&&(x2<=100)){
                   if((y1>=-100)&&(y1<=100)){
                       if((y2>=-100)&&(y2<=100)){
                           printf("%0.2f",m); } } } } }
    return 0; }