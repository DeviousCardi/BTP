#include <stdio.h>
#include <stdlib.h>
double fact(int n) {
    int c;double f=1;
    for(c=1;c<=n;c++) {
        f=f*c; }
    return f; }
double term(int n) {
    double a;
    a=fact(2*n)/(fact(n+1)*fact(n));
    return a; }
int main(){
   int n;
   scanf("%d",&n);
   printf("%lf",term(n));
   return 0; }