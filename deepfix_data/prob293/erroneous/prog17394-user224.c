#include <stdio.h>
#include <stdlib.h>
int main() {
    scanf("%d%d%d",&a,&b,&c);
    if((a+b<c)||(b+c<a)||(c+a<b))
    printf("cannot form a triangle");
    else
    if((a*a+b*b)>c*c)
    printf("obtuse triangle");
    else
    if((a*a+b*b)<c*c)
    printf("not obtuse triangle");
    return 0; }