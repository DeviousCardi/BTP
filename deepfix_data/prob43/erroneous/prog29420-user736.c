#include <stdio.h>
#include <stdlib.h>
float f(float x){
    x=-(x*x)+3*x;
return x;}
float g(float y){
    y=2*y*y*y-(y*y)-5*y;
return y;}
int main() {
int n,k,i;
float a,b;
scanf("%f%f",&a,&b);
scanf("%d",&n);
float f[n];
float p=(b-a)/n;
for(i=0;i<n;i++){
    f[i]=float(a+((b-a)/n)*float(i));
    scanf("%f",&a[i]);}
float sum=0.0;
    sum=sum+(f(a[i])-g(a[i]))*p; }
printf("%f",sum);
	return 0; }