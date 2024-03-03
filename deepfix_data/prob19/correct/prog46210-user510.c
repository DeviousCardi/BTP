#include <stdio.h>
int main() {
    float h;
    float hi;
    float w;
    float a;
    scanf("%f%f",&h,&w);
    hi=h/100;
    a=(w)/(hi*hi);
    printf("%.2f m, %.2f kg: BMI = %.2f\n",hi,w,a);
    if (a<18.5)
    printf("You have a low weight");
    else if ((a<25)&&(a>18.5))
    printf("You have normal weight");
    else if ((a<30)&&(a>25))
    printf("Obesity (1st-degree)");
    else if ((a<35)&&(a>30))
    printf("Obesity (2nd-degree)");
    else if ((a<40)&&(a>35))
    printf("Obesity (3rd-degree)");
    else
    printf("Obesity (4th-degree)");
    return 0; }