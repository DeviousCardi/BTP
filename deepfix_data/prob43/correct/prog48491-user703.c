#include <stdio.h>
#include <stdlib.h>
#include <math.h>
const double epsilon=0.000001;
int a1[100000];
void part(double a,double b,int n ){
    int i=0;
    for(i=0;i<=n;i++){
        a1[i]=a+i*(b-a)/n;} }
int main() {
	double a,b,sum=0;
	int n;
	int i;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	return 0; }