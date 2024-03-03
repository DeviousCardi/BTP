#include<stdio.h>
int main() {
    float a=0,b=0,c=0;
    scanf("%f" ,&a);
    scanf("%f" ,&b);
    scanf("%f" ,&c);
    if(((a*a)+(b*b)>(c*c))&&((c*c)+(b*b)>(a*a))&&((a*a)+(c*c)>(b*b))) {
        printf("ACUTE"); }
    else if(((a*a)+(b*b)<(c*c))&&((c*c)+(b*b)<(a*a))&&((a*a)+(c*c)<(b*b))) {
            printf("OBTUSE"); }
    else if(((a*a)+(b*b)==(c*c))&&((b*b)+(c*c)==(a*a))&&((c*c)+(a*a)==(b*b))) {
                printf("RIGHT"); }
            else{
                printf("INVALID"); }
    return 0; }