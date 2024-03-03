#include <stdio.h>
int main(){
    float Ax,Ay,Bx,By;
    float slope;
    scanf("%f %f %f %f",&Ax,&Ay,&Bx,&By);
    if(Ax==Bx) {
        printf("inf"); }
    else {
        slope=(Ay-By)/(Ax-Bx);
        printf("%0.2f",slope); }
    return 0; }