#include <stdio.h>
#include <stdlib.h>
double mod(double input){
    if(input>0)
    return input;
    else return -1*input; }
float area(double a, double b, int n){
    double sum=0,xi;
    xi=a+i*(b-a)/n
    for(i=0;i<n;i++){
        sum=sum+mod(2*xi*xi*xi-8*xi)*(b-a)/n; }
    return sum; }
int main() {
    double a,b,sum;
    int n;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	sum=area(a,b,n);
	printf("%lf",sum);
	return 0; }