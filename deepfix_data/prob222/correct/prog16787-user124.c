#include <stdio.h>
int main(){
    float a,b,c,d,e,f,x,y,z;
    scanf("%f%f%f\n",&a,&b,&c);
    scanf("%f%f%f",&d,&e,&f);
    x=((a/50.0)*40.0)+((d/100.0)*60.0);
    y=((b/50.0)*40.0)+((e/100.0)*60.0);
    z=((c/50.0)*40.0)+((f/100.0)*60.0);
    if(x>=y){
        if(x>=z){
            if(y>=z){
                printf("Median weighted score = %.2f",y);
            }else{
                printf("Median weighted score = %.2f",z); }
        }else if(x<=z){
            printf("Median weighted score = %.2f",x); } }
    else if(y>=x){
        if(y>=z){
            if(x>=z){
                printf("Median weighted score = %.2f",x);
            }else{
                printf("Median weighted score = %.2f",z); }
        }if(y<=z){
            printf("Median weighted score = %.2f",y); } }
	return 0; }