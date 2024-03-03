#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
     if(a>=b+c)
    printf("Cannot form a Triangle");
    else if(b>=a+c)
    printf("Cannot form a Triangle");
    else if(c>=a+b)
    printf("Cannot form a Triangle");
    else if (a>b && a>c && a*a>=b*b +c*c)
    printf("Not Acute Triangle");
    else if(b>a && b>c && b*b>=a*a +c*c)
    printf("Not Acute Triangle");
    else if(c>a && c>b && c*c>=a*a+b*b)
    printf("Not Acute Triangle");
    else printf("Acute Triangle");
    return 0; }