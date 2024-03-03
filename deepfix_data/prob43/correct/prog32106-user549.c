#include <stdio.h>
#include <stdlib.h>
const double epsilon = 0.000001;
int modulus(int a)   {
    int i,j;
    if((i-j)>0)   return (i-j);
    if((i-j)<0)   return (j-i); }
int main() {
    double a,b;
    scanf("%lf",&a);
    scanf("%lf",&b);
    int n,i;
    scanf("%d",&n);
    double area=0;
    double interval = (b-a)/n;
    for(i=a; i<b; i=i+(b-a)/n)    {
        double fx = -i*i + 3*i;
        double gx = 2*i*i*i - i*i - 5*i;
        area = area + (modulus(fx-gx))*(interval); }
    printf("lf",area);
	return 0; }