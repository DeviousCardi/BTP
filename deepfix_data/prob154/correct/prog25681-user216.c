#include <stdio.h>
#include <stdlib.h>
	 double f(float x){
	   if(x<=-1)
	     return 1;
	      if(x>-1&&x<1)
	      return x*x;
	      if(x>=1)
	      return x*x*x; }
int main(){
    double a,b;
    double sum=0;
    scanf("%lf %lf",&a,&b);
    int n,i;
    scanf("%d",&n);
    float l=(b-a)/n;
    for(i=a;i<b;i=i+l){
        sum=sum+f(i)*l; }
    printf("%0.4lf",sum);
    return 0; }