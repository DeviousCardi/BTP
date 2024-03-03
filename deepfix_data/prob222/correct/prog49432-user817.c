#include <stdio.h>
int main() {
    float a,b,c,d,e,f,A,B,C;
    scanf("%f%f%f" ,&a,&b,&c);
    scanf("%f%f%f" ,&d,&e,&f);
    A=((40.0*a)/(50.0))+((60.0*d)/(100.0));
    B=((40.0*b)/(50.0))+((60.0*e)/(100.0));
    C=((40.0*c)/(50.0))+((60.0*f)/(100.0));
    if((A<=B && B<=C)||(C<=B && B<=A)) {
        printf("%f" ,B); }
           else if((C<=A && A<=B)||(B<=A && A<=C)) {
                printf("%f" ,A); }
                 else if((A<=C && C<=B)||(B<=C && C<=A)) {
                    printf("%f" ,C); }
                        else {
                            printf("invalid"); }
                    return 0; }