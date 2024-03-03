#include <stdio.h>
int main()
{float a,b,c,A,B,C;
scanf("%f%f%f",&a,&b,&c);
scanf("%f%f%f",&A,&B,&C);
float d=((0.8*a)+(0.6*A));
float e=((0.8*b)+(0.6*B));
float f=((0.8*c)+(0.6*C));
if(d>=e && d>=f){
if(e>=f){printf("Median weighted score=%. 2f",e);}
else{printf("Median weighted score =%.2f",f);};}
else{
if(e>=d && e>=f){
if(d>=f){printf("Median weighted score =%.2f",d);}
else{printf("Median weighted score =%.2f",f);};}
else{
if(f>=d && f>=e){
if(d>=e){printf("Median weighted score =%.2f",d);}
else{printf("Median weighted score =%.2f",e);};};};}
	return 0; }