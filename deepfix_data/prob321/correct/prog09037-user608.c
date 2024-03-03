#include <stdio.h>
int main(){
    int x1,y1,x2,y2;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
float slope;
if(x1>-101 && y1>-101 && x2>-101 && y2>-101 && x1<101 && x2<101 && y1<101 && y2<101) {
if((x2-x1)!=0) {
    slope=(y2-y1)/(x2-x1);
    printf("%.2f",slope); }
else
printf("inf");
    return 0;
}}