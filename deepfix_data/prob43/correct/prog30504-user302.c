#include <stdio.h>
#include <stdlib.h>
int mod(int n){
    int a;
    if(a>=0){
       a=mod(a); }
    else{
  a=mod(-a); }
    return a; }
double f(double x){
    double a;
   double value=(-a*a)+(3*a);
       return value; }
double g(double x){
   double a;
    double value=((2*a*a*a)-(a*a))-(5*a);
    return value; }
int main() {
    int n;
    double a,b;
    scanf("%lf%lf",&a,&b);
    scanf("%d",&n);
    double value,i;
    double sum=0;
    for(i=0;i<n;i++){
        value=mod(f(a+(i*((b-a)/n)))-g(a+(i*((b-a)/n))))*((b-a)/n);
        sum=sum+value; }
	printf("%.4lf",sum);
	return 0; }