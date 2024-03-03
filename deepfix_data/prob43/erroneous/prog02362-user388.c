#include <stdio.h>
#include <stdlib.h>
void give_area(double,double,int);
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
void give_area(double a;double b;int n) {
int i;
double area,dx;
dx=(b-a)/n;
for(i=1;i<n;i++) {
area=area+fabs(f_x(a,dx,i)-g_x(a,dx,i))*dx }
printf("%lf",area); }
double f_x(double a,double dx,int i) { }