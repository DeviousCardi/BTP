#include <stdio.h>
#include <stdlib.h>
int main() {
    int a;
    int b;
    int c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if (a>b && b>c)
    printf("%d",b);
    else if (c>b && b>a)
    printf("%d",b);
    else if (a>c && c>b)
    printf("%d",c);
    else if (b>c && c>a)
    printf("%d",c);
    else if(a=b && b>c)
    printf("%d",c);
    else if(b=c && c>a)
    printf("%d",a);
    else if(c=a && a>b)
    printf("%d",b);
    else
    printf("%d",a);
	return 0; }