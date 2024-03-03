#include <stdio.h>
#include <stdlib.h>
const double epsilon = 0.000001;
int modulus(int a)   {
    if(a>=0) {  return a;   }
    else return (-a); }
int main() {
    double a,b;
    scanf("%lf",&a);
    scanf("%lf",&b);
    int n;
    double i;
    scanf("%d",&n);
    double area=0;
    double interval = (b-a)/n;
    for(i=a; i<=b; i=i+(b-a)/n)    {
        double fx = -i*i + 3*i;
        double gx = 2*i*i*i - i*i - 5*i;
        area = area + (modulus(fx-gx))*(interval); }
    printf("%0.4lf",area);
	return 0; }