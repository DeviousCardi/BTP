#include <stdio.h>
#include <stdlib.h>
int main()
{   int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a+b<=c)||(b+c<=a)||(c+a<=b))
    printf("Cannot form a Triangle");
    else
    if((a*a+b*b)>c*c)
    printf("Obtuse Triangle");
    else
    if((a*a+b*b)<c*c)
    printf("Not obtuse Triangle");
    return 0; }