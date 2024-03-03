#include <stdio.h>
#include <stdlib.h>
#include<math.h>
float f(float x){
    float ans;
    ans=-(x*x)+3*x;
    return ans; }
float g(float x){
    float ans;
    ans=2*(x*x*x)-(x*x)-5*x;
    return ans; }
int main() {
    double a,b,area;
    float dx,x;
    int i,n;
    scanf("%lf %lf",&a,&b);
    scanf("%d",&n);
    dx=(b-a)/n;
    area=0;
    if(a==b){
      printf("%5.4lf",area); }
    else{
    for(i=0,(x=a);i<n,(x<b);i++,(x=x+(b-a)/n)){
        area=area+(fabs(f(x)-g(x)))*dx; } }
    printf("%0.4lf",area);
	return 0; }