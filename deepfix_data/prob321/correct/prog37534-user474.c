#include <stdio.h>
int main(){
    int x1;
    int x2;
    int y1;
    int y2;
    float s;
    scanf("%d%d",&x1,&y1);
    scanf("%d%d",&x2,&y2);
    if((y2<=100&&y2>=-100)&&(x2<=100&&x2>=-100)&&(y1<=100&&y1>=-100)&&(x1<=100&&x1>=-100)&&((x1!=x2)||(y1!=y2))) {
      if(x2==x1) {
         printf("inf\n"); }
     else {
        s=(y2-y1)/(x2-x1);
        printf("%5.2f",s); } }
    return 0; }