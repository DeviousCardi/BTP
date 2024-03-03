#include <stdio.h>
int main()
{float a,b,c;
float A,B,C;
scanf("%f%f%f",&a,&b,&c);
scanf("%f%f%f",&A,&B,&C);
float x,y,z;
x=a*40/50+A*60/100;
y=b*40/50+B*60/100;
z=c*40/50+C*60/100;
if(x<=y) {
    if(x<=z) {
        if(y<=z) {
          printf("%.2f",y); }
        else{
            printf("%.2f",z);}
   } else{
        printf("%.2f",x);}
}else{
    if(y<=z) {
        if(x<=z){
        printf("%.2f",x); }
        else{printf("%.2f",z); }
       } else{printf("%.2f",y);}
	return 0;
}}