#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if((a<=b && a>=c)||(a<=c && a>=b))
    printf("\n%d",a);
    else if((b<=a && b>=c)||(b<=c && b>=a))
    printf("\n%d",b);
    else if((c<=b && c>=a)||(c<=a && c>=b))
    printf("\n%d",c);
return 0; }