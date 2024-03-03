#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if (a<=b)||(b<=c) {printf("%d",b)};
    else {if (a==b)||(b>=c) {printf("%d",c)};
    return 0; }