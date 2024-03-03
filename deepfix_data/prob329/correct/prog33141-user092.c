#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c;
    if((a+b>c)&&(b+c>a)&&(a+c>b)) {
        if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a)) {
            printf("Right Triangle"); }
        else {
            printf("Not Right Triangle"); } }
    else if((a+b<=c)||(b+c<=a)||(a+c<=b)) {
        printf("Cannot form a Triangle"); }
	return 0; }