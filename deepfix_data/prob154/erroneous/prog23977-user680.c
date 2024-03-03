#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double area(int y,double a,double b){
    double x2,x1;
	int n;
	scanf("%d",&n);
	x1=abs((b-a)/n);
    int i;
    for(i=0;i<=n;i++){
         x2=a+i*x1;
	        area=pow(x2,a)*x1; }
    return area; }
int main() {
    	double a,b,z;
scanf("%lf %lf",&a,&b);
	if(a>=1&&b>=1){
	 z= area(3,a,b); }
	if(a>-1&&b<1){
	 z= area(2,a,b); }
	if(a<-1&&b<-1){
	   z= area(0,a,b); }
	if(a<-1&&b>-1&&b<1)
	z=area(0,a,-1)+area(2,-1,b);
	if(a<-1&&b>1)
	z=area(0,a,-1)+area(2,-1,1)+area(3,1,b);
	if(a>-1&&a<1&&b>1)
	z=area(2,a,1)=area(3,1,b);
	printf("%d",z);
	return 0; }