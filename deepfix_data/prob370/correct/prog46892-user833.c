#include<stdio.h>
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a+b<=c)
    printf("INVALID");
    else if (a+b>c) {
        if ((a*a)+(b*b)==(c*c))
        printf("RIGHT");
        else if((a*a)+(c*c)==(b*b))
        printf("RIGHT");
        else if((b*b)+(c*c)==(a*a))
        printf("RIGHT"); }
    return 0; }