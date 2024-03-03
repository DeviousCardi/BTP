#include<stdio.h>
int main() {
    float a,b,c;
    scanf("%f" ,&a);
    scanf("%f" ,&b);
    scanf("%f" ,&c);
    if((a*a)+(b*b)>(c*c)) {
        printf("ACUTE"); }
    else if((a*a)+(b*b)<(c*c)) {
            printf("OBTUSE"); }
    else if((a*a)+(b*b)==(c*c)) {
                printf("RIGHT"); }
            else{
                printf("INVALID"); }
    return 0; }