#include<stdio.h>
#include<stdlib.h>
int main() {
    float a, b, c;
    scanf("%f%f%f",&a,&b,&c);
if(a+b>c) {
    if(a*a+b*b<c*c) {
        printf("Obtuse Triagnle"); }
    else {
        printf("Not Obtuse Triangle"); } }
else {
    printf("Cannot form a Triangle"); }
    return 0; }