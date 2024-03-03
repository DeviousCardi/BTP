#include <stdio.h>
#include <stdlib.h>
int main() {
    double a,b; int n;
    scanf("%lf %lf %d",&a,&b,&n);
    double area1(double x,double y,int z) {
        printf("%0.4lf",(y-x)*1);
        return 0; }
    double area2(double x,double y,int z) {
        int k; double t=(y-x)/z;
        double a=0; double temp;
        k=1;
        while(k<=n) {
            temp = (k*t)*(k*t);
            a = a + temp; }
        printf("%0.4lf",a);
        return 0; }
    double area3(double x,double y,int z) {
        int k; double t=(y-x)/z;
        double a=0; double temp;
        k=1;
        while(k<=z) {
            temp = (k*t)*(k*t)*(k*t);
            a = a + temp; }
        printf("%0.4lf",a);
        return 0; }
    if(a<=-1&&b<-1)
    area1(a,b,n);
    if(a>=-1&&b<=1)
    area2(a,b,n);
    if(a>1&&b>1)
    area3(a,b,n);
	return 0; }