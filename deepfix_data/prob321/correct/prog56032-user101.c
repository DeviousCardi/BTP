#include <stdio.h>
int main(){
int x1,x2,y1,y2;
float s;
scanf("%d %d",&x1,&y1);
scanf("%d %d",&x2,&y2);
if((x1-x2)==0)
    printf("inf");
else if((x1!=x2)||((y1!=y2)&&(-100<=x1<= 100)&&(-100<=x2<= 100)&&(-100<=y1<= 100)&&(-100<=y1<= 100))){
    s=(y1-y2)/(x1-x2);
    printf("%.2f",s); }
    return 0; }