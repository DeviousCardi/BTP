#include<stdio.h>
int main() {
    int a, b, c;
             scanf("%d%d%d", &a, &b, &c);
    if( (a+b<=c)||(b+c<=a)||(a+c<=b)) {
    printf("INVALID"); }
        else {
    if((a*a+b*b==c*c)||(a<=b<c)||(b<=a<c)) {
    printf("RIGHT"); }
    else {
        if((a*a+b*b>c*c)||(a*a+c*c>b*b)||(b*b+c*c>=a*a)) {
        printf("ACUTE"); }
    else {
    printf("OBTUSE"); } } }
    return 0; }