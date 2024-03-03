#include <stdio.h>
int main (){
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if (a+b<c)
    {printf("INVALID\n");}
    else if ((a*a+ b*b == c*c)||(a*a+ c*c == b*b)||(b*b + c*c == a*a))
    {printf("RIGHT\n");}
    else if ((a*a+ b*b > c*c) && (a*a+ c*c > b*b) && (b*b + c*c > a*a))
    {printf("ACUTE\n");}
    else if ((a*a+ b*b == c*c)&&(a*a+ c*c == b*b)&&(b*b + c*c == a*a))
    {printf("OBTUSE\n");}
    return 0; }