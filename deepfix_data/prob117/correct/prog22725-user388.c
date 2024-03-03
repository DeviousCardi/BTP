#include <stdio.h>
#include <stdlib.h>
void give_area(double,double,int);
const double epsilon=0.000001;
int main() {
double a,b;
int n;
scanf("%lf %lf",&a,&b);
scanf("%d",&n);
give_area(a,b,n);
return 0; }
#include<math.h>
double f_x(double,double,int);
double g_x(double,double,int);
void give_area(double a,double b,int n) {
int i;
double area=0.0,dx;
dx=(b-a)/n;
for(i=0;i<n;i++) {
area=area+fabs(f_x(a,dx,i)-g_x(a,dx,i))*dx; }
printf("%.4lf",area); }
double f_x(double a,double dx,int i) {
double f,x;
x=a+i*dx;
f=-x*x+3*x;
return f; }
double g_x(double a,double dx,int i) {
double g,x;
x=a+i*dx;
g=2*x*x*x-x*x-5*x;
return g; }