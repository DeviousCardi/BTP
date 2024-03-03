#include <stdio.h>
int main(){
    float h,m;
    scanf("%f%f",&h,&m);
    float b=(m/(h*h));
    printf("%.2f%.2f%.2f",h,m,b);
    if(b<18.5){
        printf("You have low weight");
    }else if(b>=18.5&&b<25){
        printf("You have normal weight");
    }else if(b>=25&&b<30){
        printf("Obesity(1st-degree)");
    }else if(b>=30&&b<35){
        printf("Obesity(2nd-degree)");
    }else if(b>=35&&b<40){
        printf("Obesity(3rd-degree)");
    }else if(b>=40){
        printf("Obesity(4th-degree"); }
	return 0; }