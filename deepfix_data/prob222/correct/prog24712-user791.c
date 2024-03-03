#include <stdio.h>
int main() {
    float a,b,c,a_mid,b_mid,c_mid,a_end,b_end,c_end;
    scanf("%f%f%f",&a_mid,&b_mid,&c_mid);
    scanf("%f%f%f",&a_end,&b_end,&c_end);
    a=a_mid*40/50+a_end*60/100;
    b=b_mid*40/50+b_end*60/100;
    c=c_mid*40/50+c_end*60/100;
    if(a<=b){
         if(a<=c){
                 if(b<=c){printf("Median weighted score = %.2f",b);}
                 else {printf("Median weight score = %.2f",c);} }
         else{
             printf("Median weighted score = %.2f",a); } }
    else{
        if(b<=c){
                if(a<=c){printf("Median weighted score = %.2f",a);}
                else{printf("Median weighted score = %.2f",c);} }
        else{
            printf("Median weighted score = %.2f",b); } }
	return 0; }