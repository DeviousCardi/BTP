#include <stdio.h>
#include <stdlib.h>
int main() {
    int a;
    int b;
    int c;
    int d,e,f,g,h,i;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    d=a+b-c;
    e=b+c-a;
    f=c+a-b;
    if (d>0 && e>0 && f>0) {
        g=(a*a)+(b*b)-(c*c);
        h=(b*b)+(c*c)-(a*a);
        i=(c*c)+(a*a)-(b*b);
        if (g>0 && h>0 && i>0) {
            printf("Acute Triangle"); }
        else {
            printf("Not Acute Triangle"); } }
        else {
        printf("Cannot form a Triangle"); }
	return 0; }