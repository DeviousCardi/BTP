#include <stdio.h>
int main(){
    float ax,ay,bx,by,px,py;
    scanf("%f%f%f%f%f%f",&ax,&ay,&bx,&by,&px,&py);
    if(bx>=ax&&by>=ay){
   if((px<ax&&py>bx)||(py>by&&py<ay))
   printf("Point is outside the rectangle.");
   if ((px>ax&&py<bx)||(py<by&&py>ay))
   printf("Point is inside the rectangle.");
   else
   printf("Point is on the rectangle."); }
    return 0; }