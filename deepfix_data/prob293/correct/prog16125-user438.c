#include<stdio.h>
#include<stdlib.h>
int main(){
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    if(a+b<2*c){
        if((a*a)+(b*b)>(c*c))
        {printf("ACUTE");}
        else{printf("OBTUSE"); } }
 else{printf("NOT A TRIANGLE"); }
return 0;}