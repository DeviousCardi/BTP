#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(((a+b)<c)||((a+c)<b)||((b+c)<a))
    printf("Cannot form a Triangle");
    else if((((a*a)+(b*b))>(c*c))&&(((a*a)+(c*c))>(b*b))&&(((c*c)+(b*b))>(a*a)))
    printf("Acute Triangle");
    else
    printf("Not Acute Triangle");
    return 0; }