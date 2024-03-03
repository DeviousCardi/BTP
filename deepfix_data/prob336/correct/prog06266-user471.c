#include <stdio.h>
#include <stdlib.h>
int main() {
    int a;
    int b;
    int c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>=(b+c)||b>=(a+c)||c>=(a+b))
    printf("Cannot form a Triangle");
    else {
    if((c*c)<((a*a)+(b*b))&&(a*a)<((b*b)+(c*c))&&(b*b)<((a*a)+(c*c)))
    printf("Acute Triangle");
    else
    printf("Not Acute Triangle"); }
	return 0; }