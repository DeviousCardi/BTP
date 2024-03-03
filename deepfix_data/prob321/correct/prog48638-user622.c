#include <stdio.h>
int main(){
  float x1,y1,x2,y2;
float slope,z;
scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
 if((y2!=y1)&&(x2==x1))
 {printf("inf");}
  else{ slope=(y2-y1)/(x2-x1);
          z=slope*(-1);
      if(slope>=0){printf("%.2f",slope);}
         else {printf("%.2f",z);} }
           return 0; }