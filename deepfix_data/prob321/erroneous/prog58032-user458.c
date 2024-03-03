#include <stdio.h>
int main(){
    int x1 ,y1,x2,y2,t1,t2,m;
    float n;
    -100<=x1&&x1<=100;
    -100<=x2&&x2<=100;-100<=y1&&y1<=100;
    -100<=y2&&y2<=100;
    scanf("%d  %d\n",&x1,&y1);
    scanf("%d  %d",&x2,&y2);
   if(x1==x2){
       printf("inf"); }
   else if{
       t1=x1-x2;
   t2=y1-y2;
       m=(t2/t1);
       n=m*1.00;
       printf("%0.2f",n); }
    return 0; }