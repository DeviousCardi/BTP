#include <stdio.h>
#include <stdlib.h>
int main () {
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if((a+b>c)&&(b+c>a)&&(c+a>b)) {
        if((a*a=b*B+c*c)||(a*a+b*B=c*c)||(b*B=c*c+a*a)) {
            printf("Right Triangle"); }
        else {
            printf("Not Right Triangle"); } }
    else {
        printf("Cannot form a Triangle"); }
return 0; }