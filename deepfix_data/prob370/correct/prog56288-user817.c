#include<stdio.h>
int main() {
    float a=0,b=0,c=0;
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