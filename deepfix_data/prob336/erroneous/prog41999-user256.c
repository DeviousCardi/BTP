#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if (a+b>c && b+c>a && a+c>b) {
        if (a*a+b*b-c*c<0 :: b*b+c*c-a*a<0 :: a*a+c*c-b*b<0 :: a*a+b*b==c*c :: a*a+c*c==b*b :: b*b+c*c==a*a) {
        printf("Not Acute Triangle");
        else
        printf("Acute Triangle"); } }
    else {
        printf("Cannot form a Triangle"); }
	return 0; }