#include <stdio.h>
int main() {
    float a,b,c,d,e,f,A,B,C;
    scanf("%d%d%d/n" ,&a,&b,&c);
    scanf("%d%d%d" ,&d,&e,&f);
    A=((40.0*a)/(50.0))+((60.0*d)/(100.0));
    B=((40.0*b)/(50.0))+((60.0*e)/(100.0));
    C=((40.0*c)/(50.0))+((60.0*f)/(100.0));
    if(A<=B && B<=C) {
        printf("%f" ,B); }
     else if(C<=B && B<=A) {
            printf("%f" ,B); }
           else if(C<=A && A<=B) {
                printf("%f" ,A); }
             else if(B<=A && A<=C) {
                    printf("%f" ,A); }
                 else if(A<=C && C<=B) {
                    printf("%f" ,C); }
                     else if(B<=C && C<=A) {
                            printf("%f" ,A); }
                        else {
                            printf("invalid"); }
                    return 0; }