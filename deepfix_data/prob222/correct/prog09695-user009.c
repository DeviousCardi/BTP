#include <stdio.h>
int main()
{float a1,a2,b1,b2,c1,c2,a_final,b_final,c_final;
scanf("%f %f %f ",&a1,&b1,&c1);
scanf("%f %f %f",&a2,&b2,&c2);
a_final=a1*0.8+a2*0.6;
b_final=b1*0.8+b2*0.6;
c_final=c1*0.8+c2*0.6;
if((a_final>=b_final && b_final>=c_final)||(c_final>=b_final && b_final>=a_final))
    printf("Median weighted score = %.2f", b_final);
else if((b_final>=a_final && a_final>=c_final)||(c_final>=a_final && a_final>=b_final))
    printf("Median weighted score = %.2f", a_final);
else if((a_final>=c_final && c_final>=b_final)||(b_final>=c_final && c_final>=a_final))
    printf("Median weighted score = %.2f", c_final);
    return 0; }