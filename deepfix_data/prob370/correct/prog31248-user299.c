#include<stdio.h>
int main() {
    int a,b,c;
    printf ("print any one of the following \n INVALID\nACUTE\nRIGHT\nOBTUSE");
    scanf ("%d%d%d",&a,&b,&c);
    if(a*a+b*b==c*c)
    printf ("RIGHT");
    if(a*a+b*b>c*c)
    printf("OBTUSE");
    if(a*a+b*b<c*c)
    printf("ACUTE");
    if(a+b<c)
    printf("INVALID");
    return 0; }