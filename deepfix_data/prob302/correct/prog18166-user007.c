#include <stdio.h>
int main() {
 float ax,ay,bx,by,px,py;
 scanf("%f%f%f%f%f%f",&ax,&ay,&bx,&by,&px,&py);
 if(px<=ax&&px>=bx||px<=bx&&px>=ax) {
  if(py<=ay&&py>=by||py<=by&&py>=ay) {
    if(py==ay||py==by||px==bx||px==ax)
     printf("Point is on the rectangle.");
    else
     printf("Point is inside the rectangle."); }
  else printf("Point is outside the rectangle."); }
 else printf("Point is outside the rectangle.");
 return 0; }