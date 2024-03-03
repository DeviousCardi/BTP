#include <stdio.h>
int main() {
float mida,midb,midc,enda,endb,endc;
scanf("%f%f%f\n",&mida,&midb,&midc);
scanf("%f%f%f",&enda,&endb,&endc);
float a=.4*mida+.6*enda;
float b=.4*midb+.6*endb;
float c=.4*midc+.6*endc;
if((a>b)&&(a>c)) {
    if(b>c)
    printf("Median weighted score =%.2f",b);
    else
    printf("Median weighted score =%.2f",c); }
else if((b>a)&&(b>c)) {
    if(a>c)
    printf("Median weighted score =%.2f",a);
    else
    printf("Median weighted score =%.2f",c); }
	else if((c>b)&&(c>a)) {
    if(b>a)
    printf("Median weighted score =%.2f",b);
    else
    printf("Median weighted score =%.2f",a); }
else if(a==b==c) {
    printf("Median weighted score =%.2f",a);}
	return 0; }