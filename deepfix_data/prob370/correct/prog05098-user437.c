#include<stdio.h>
int main() {
int a;
int b;
int c;
scanf("%d%d%d", &a,&b,&c);
if (a+b<c){
    printf("INVALID");
    } else if ((a*a+b*b)>(c*c)) {
            printf("ACUTE");
    } else if ((a*a+b*b)==(c*c)) {
            printf("RIGHT");
    } else  if ((a*a+b*b)<(c*c)) {
            printf("OBTUSE"); }
     return 0; }