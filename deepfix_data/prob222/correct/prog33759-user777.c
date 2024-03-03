#include <stdio.h>
int main() {
    float a;
    float b;
    float c;
    float d;
    float e;
    float f;
    scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
    float A;
    float B;
    float C;
    A=a*40/50+d*60/100;
    B=b*40/50+e*60/100;
    C=c*40/50+f*60/100;
    if(((A<=B)&&(B<=C))||((C<=B)&&(B<=A)))
    printf("Median weighted score = %.2f",B);
   else if (((B<=A)&&(A<=C))||((C<=A)&&(A<=B)))
   printf("Median weighted score = %.2f",A);
   else if (((B<=C)&&(C<=A))||((A<=C)&&(C<=B)))
    printf("Median weighted score = %.2f",C);
  return 0; }