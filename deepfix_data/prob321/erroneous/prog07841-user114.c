#include <stdio.h>
int main() {
    float m;
    int x1,x2,y1,y2;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    if (x2 !=x1) {
         m = (y2-y1)/((x2-x1)+0.0) ;
         printf("%.2f",m); }
     else {
         if (y2-y1) >0 printf("inf");
         else printf("-inf"); }
    return 0; }