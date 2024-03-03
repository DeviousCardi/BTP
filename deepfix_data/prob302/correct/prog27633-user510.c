#include <stdio.h>
#include <math.h>
int main() {
    float ax,ay;
    float cx,cy;
    float px;
    float py;
    float t;
    if(ax>cx)
    {t=ax;
    cx=ax;
    cx=t; }
    if(ay>cy)
    {t=ay;
    cx=ay;
    cy=t; }
    if (((px<cx)&&(px>ax))&&((py<cy)&&(py>ay)))
    printf("Point is inside the rectangle.");
    else if(((py==cy)||(py==ay))&&((px<=cx)&&(px>=ax)))
    printf("Point is on the rectangle");
    else if(((px==cx)||(px==ax))&&((py<=cy)&&(py>=ay)))
    printf("Point is on the rectangle");
    else
    printf("Point is outside the rectangle");
    return 0; }