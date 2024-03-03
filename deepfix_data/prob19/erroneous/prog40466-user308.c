#include <stdio.h>
int main() {
    float height,weight,bmi;
    scanf("%f%f",&height,&weight);
    height=height/100;
    bmi=(height)/(weight*weight);
    printf("%f,%f,%f",height,weight,bmi);
    if(bmi<18.5){printf("you have low weight");}
     else if(bmi<18.5 && bmi<25){printf("you have normal weight");}
    else if(bmi<25 && bmi<30){printf("obesity(1st-degree ");}
    else if(bmi<30 && bmi<35){printf("obesity (2nd-degree");}
    else if(bmi<35 && bmi<40){printf("obesity (3rd-degree)");}
    else if(bmi=>40 ){ printf("4th-degree");}
	return 0; }