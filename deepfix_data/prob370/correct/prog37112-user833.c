#include<stdio.h>
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a+b<=c)
    printf("INVALID");
    if (a+b>c) {
        if ((a*a)+(b*b)==(c*c) || (a*a)+(c*c)==(b*b) || (b*b)+(c*c)==(a*a))
        printf("RIGHT");
        else if ((a*a)+(b*b)<(c*c) || (a*a)+(c*c)<(b*b) || (a*a)+(b*b)<(c*c))
        printf("OBTUSE");
        else if ((a*a)+(b*b)>(c*c) || (a*a)+(c*c)>(b*b) || (b*b)+(c*c)>(a*a))
        printf("ACUTE"); }
    return 0; }