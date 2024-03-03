#include <stdio.h>
#include <math.h>
int main() {
    float ax,ay;
    float cx,cy;
    float px;
    float py;
    float a;
    float t;
    float b;
    float c;
    scanf("%f%f%f%f%f%f",&ax,&ay,&cx,&cy,&px,&py);
    ax=(ax<0)? -ax:ax;
    ay=(ay<0)? -ay:ay;
    px=(px<0)? -px:px;
    py=(py<0)? -py:py;
    cx=(cx<0)? -cx:cx;
    cy=(cy<0)? -cy:cy;
    if(ax>ay)
    {t=ay;
    ax=ay;
    t=ax; }
    if ((px<cx)&&(px>ax))&&((py<cy)&&(py>ay))
    printf("\"Point is inside the rectangle.\"");
    else if(((py==cy)||(py==ay))&&((px<cx)&&(px>ax)))
    printf("\"Point is on the rectangle\"");
    else if(((px==cx)||(px==ax))&&((py<cy)&&(py>ay)))
    printf("\"Point is on the rectangle\"");
    else
    printf("\"Point is outside the rectangle\""); }