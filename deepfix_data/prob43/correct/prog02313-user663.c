#include <stdio.h>
double f(double l) {
	        double m;
	        m=3*l-l*l;
	        return m; }
double g(double c) {
            double d;
            d=2*c*c*c-c*c-5*c;
            return d; }
int main() {
    const double epsilon=0.000001;
    int n;
    double a,b;
    double interval,i,val=0,sum=0,area;
    scanf("%lf %lf %d",&a,&b,&n);
    interval=(b-a)/n;
    for(i=a;i<b;i=i+interval) {
            val=f(i)-g(i);
                if (val<0+epsilon) {
                        val=-(val); }
            sum=sum+val; }
    area=interval*sum;
    printf("%.4f",area);
    return 0; }