#include <stdio.h>
int main(){
   int x1,y1,x2,y2,z;
float slope;
scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
   slope=(y2-y1)/(x2-x1);
 z=slope*(-1);
 if((y2!=y1)&&(x2==x1))
 {printf("inf");}
  else if(slope>=0){printf("%.2f",slope);}
else printf("%.2f",z);
    return 0; }