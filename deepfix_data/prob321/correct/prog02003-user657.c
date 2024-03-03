#include <stdio.h>
int main(){
int x1,y1,x2,y2;
int m;
float d;
if((-100<=x1)&&(x1<=100)&&(-100<=y1)&&(y1<=100)&&
(-100<=x2)&&(x2<=100)&&
(-100<=y2)&&(y2<=100)){
scanf("%d %d",&x1,&y1);
scanf("%d %d",&x2,&y2); }
m=(y2-y1)/(x2-x1);
d=(float)m;
if(x2-x1==0){
    printf("inf"); }
else{
    printf("%.2f",d); }
    return 0; }