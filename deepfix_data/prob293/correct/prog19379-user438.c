#include<stdio.h>
#include<stdlib.h>
int main(){
    float a; float b; float c;
    scanf("%f%f%f",&a,&b,&c);
   if(a+b>2*c) {
    if(a*a+b*b<c*c)
    {printf("Obtuse Triagnle"); }
    else {printf("Not Obtuse Triangle"); }
    }else {printf("Cannot form a triangle"); }
    return 0; }