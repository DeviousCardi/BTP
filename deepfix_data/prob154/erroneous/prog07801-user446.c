#include <stdio.h>
#include <stdlib.h>
const double e=0.000001;
int f(double n){
    double res;
    if(n+e<=-1 || n-e<=1)res=1;
    else if(n+e<=1 || n-e<=1)res=n*n;
    else res=n*n*n;
    return res; }
double area(double a,double b,int n){
    double x=a,d=(b-a)/n;
    for(i=0;i<n;i++){
        area=area+f(x)*d;
        x=x+d; } }
int main() {
	return 0; }