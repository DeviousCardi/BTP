#include <stdio.h>
int main()
{float a1,a2,b1,b2,c1,c2,a,b,c,med;
scanf("%f%f%f",&a1,&b1,&c1);
scanf("%f%f%f",&a2,&b2,&c2);
a=(a1*40/50)+(a2*60/100);
b=(b1*40/50)+(b2*60/100);
c=(c1*40/50)+(c2*60/100);
if (a <= b) {
if (a <= c) {
if (b <= c) {
if (b <= c) {
med=b;
} else {
med=c;} }
} else {
med=a ; }
} else {
if (b <= c) {
if (a <= c) {
med=a;
} else {
med=c; } }
} else {
med=b; } } }
printf("Median weighted score =%.2f",med);
	return 0; }