#include<stdio.h>
int main() {
    int a;
    int b;
    int c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if ((a+b>c)&&(b+c>a)&&(c+a>b)) {
        if(c*c<a*a+b*b) {
            printf("ACUTE"); }
        else if (c*c==a*a+b*b) {
            printf("RIGHT"); }
        else if (c*c>a*a+b*b) {
            printf("OBTUSE"); } }
    else {
        printf("INVALID"); }
    return 0; }