#include <stdio.h>
int main() {
    int x1,y1,x2,y2;
    float slope;
    scanf("%d %d\n",&x1,&y1);
    scanf("%d %d",&x2,&y2);
   float a=x2-x1;
   float b=y2-y1;
   if(a==0){
       printf("inf");
       return 0; }
   else
   slope=b/a;
   printf("%.2f",slope);
   return 0; }