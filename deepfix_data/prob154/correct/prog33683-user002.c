#include <stdio.h>
#include <stdlib.h>
double f(double x){
    double l;
    if(x<=-1){
        l=1; }
    else if((-1<x)&&(x<1)){
        l=x*x; }
    else if(x>=1){
        l=x*x*x; } }
int main() {
    int n;
    double a,b;
    scanf("%lf%lf",&a,&b);
    scanf("%d",&n);
	return 0; }