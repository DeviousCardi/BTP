#include <stdio.h>
int main(){
   int x1,y1,x2,y2;
float slope;
scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
   slope=(y2-y1)/(x2-x1);
 if((y2!=y1)&&(x2==x1))
 {printf("inf");}
  else if(slope>=0){printf("%.2f",slope);}
  else if(slope<0){
                      slope=slope*(-1);
                  printf("%.2f",slope);}
    return 0; }