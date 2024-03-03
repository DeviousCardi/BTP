#include <stdio.h>
#include <stdlib.h>
	 float f(float x){
	     return 1; }
int main(){
    double a,b;
    double sum=0;
    scanf("%lf%lf",&a,&b);
    int n,i;
    scanf("%d",&n);
    for(i=a;i<b;i=i+(b-a)/n){
        sum=sum+f(i)*(b-a)/n; }
    printf("%lf",sum);
    return 0; }