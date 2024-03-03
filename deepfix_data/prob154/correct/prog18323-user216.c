#include <stdio.h>
#include <stdlib.h>
	float f(float x){
	    if(x<=-1)return 1;
	    if(x>-1&&x<1)return x*x;
	    if(x>=1)return x*x*x;}
int main(){
    double a,b;
    double sum=0;
    scanf("%lf%lf",&a,&b);
    int n,i;
    scanf("%d",n);
    for(i=a;i<b;i=i+(b-a)/n){
        sum=sum+f(i)*(b-a)/n; }
    printf("%lf",sum);
    return 0; }