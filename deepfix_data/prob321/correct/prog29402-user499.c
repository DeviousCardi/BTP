#include <stdio.h>
int main(){
    float a,b,c,d;
    float slp;
    scanf("%f %f",&a,&b);
    scanf("%f %f",&c,&d);
    slp=(d-b)/(c-a);
    if(a!=c)
         printf("%.2f",slp);
   else if(a==c)
        printf("inf");
    return 0; }