#include <stdio.h>
int main() {
    int x1,x2,y1,y2;
    scanf("%d  %d\n%d  %d",&x1,&y1,&x2,&y2);
    if((x1,x2,y1,y2>=-100&&x1,x2,y1,y2<=100)&&(x1!=x2||y1!=y2)) {
      if(x1!=x2) {
      float m=(y2-y1)/(x2-x1);
      printf("%.2f",m); }
     else if(x1=x2) {
         printf("inf"); } }
    return 0; }