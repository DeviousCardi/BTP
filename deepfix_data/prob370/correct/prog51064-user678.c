#include<stdio.h>
int main() {
    int a, b, c;
             scanf("%d%d%d", &a, &b, &c);
    if( (a+b<=c)||(b+c<=a)||(a+c<=b)) {
    printf("INVALID"); }
    else {
        if(((a*a+b*b>c*c)||(c>=b>=a)||(c>=a>=b))||((a*a+c*c>b*b)||(b>=a>=c)||(b>=c>=a))||((c*c+b*b>a*a)||(a>=b>=c)||(a>=c>=b))) {
    printf("ACUTE"); }
        else {
    if((a*a+b*b==c*c)||(a<=b<c)||(b<=a<c)) {
    printf("RIGHT"); }
    else {
    printf("OBTUSE"); } } }
    return 0; }