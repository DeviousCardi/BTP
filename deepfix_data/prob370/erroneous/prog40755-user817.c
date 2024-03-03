#include<stdio.h>
int main() {
    float a=0,b=0,c=0;
    scanf("%f" ,&a);
    scanf("%f" ,&b);
    scanf("%f" ,&c);
    if((a+b)<=c)||((a+c)<=b)||((b+c)<=a)) {
        printf("INVALID"); }
    else if(((a*a)+(b*b)>(c*c))) {
        printf("ACUTE"); }
    else if(((a*a)+(b*b)==(c*c))||((b*b)+(c*c)==(a*a))||((c*c)+(a*a)==(b*b))) {
            printf("RIGHT"); }
    else if((a*a)+(b*b)<(c*c)) {
                printf("OBTUSE"); }
    return 0; }