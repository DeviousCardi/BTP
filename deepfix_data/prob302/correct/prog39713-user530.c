#include <stdio.h>
int main(){
    float ax,ay,bx,by,px,py;
    scanf("%f%f%f%f%f%f",&ax,&ay,&bx,&by,&px,&py);
   if((px==ax&&(py>=ay&&py<=by))||(px==bx&&(py>=ay&&py<=by)||(py==by&&(px>=ax&&px<=bx)||(py==ay&&(px>=ax&&px<=bx)))))
   {printf("Point is on the rectangle.");}
   else if (((px>ax&&px<bx)&&(py<by&&py>ay))||(((px<ax&&px>bx)&&(py>by&&py<ay))))
  { printf("Point is inside the rectangle.");}
   else
  { printf("Point is outside the rectangle.");}
        return 0; }