#include <stdio.h>
#include <stdlib.h>
const double e=0.000001;
double f(double n){
    double res;
    if(n+e<=-1 || n-e<=-1)res=1;
    else if(n+e<=1.0 || n-e<=1.0)res=n*n;
         else res=n*n*n;
    return res; }
double area(double a,double b,int n){
    int i;
    double x=a,d=((b-a)/n),area=0;
    for(i=0;i<n;i++){
        area=area+(f(x)*d);
        x=x+d; }
    return area; }
int main() {
    double a,b;
    int n;
    scanf("%lf%lf%d",&a,&b,&n);
    printf("%.4lf\n",area(a,b,n));
	return 0; }