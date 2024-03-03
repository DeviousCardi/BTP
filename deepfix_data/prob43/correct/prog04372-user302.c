#include <stdio.h>
#include <stdlib.h>
int mod(int n){
    int a;
    if(a>=0){
       a=mod(a); }
    else{
    a=mod(-a); }
    return a; }
int f(int x){
   int value=-x*x+3*x;
       return value; }
int g(int x){
    int value=2*x*x*x-x*x-5*x;
    return value; }
int main() {
    int n;
    double a,b;
    scanf("%lf%lf",&a,&b);
    scanf("%d",&n);
    int value,i;
    double sum=0;
    scanf("%lf",&n);
    for(i=0;i<n;i++){
        value=mod(f(a+(i*(b-a)/n))-g(a+(i*(b-a)/n)))*(b-a)/n;
        sum=sum+value; }
	printf("%.4lf",sum);
	return 0; }