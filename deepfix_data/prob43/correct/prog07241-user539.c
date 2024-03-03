#include <stdio.h>
#include <stdlib.h>
float f(float a) {
           float q;
           q=0-a*a+3*a;
           return q; }
float g(float b) {
              float s;
              s=2*b*b*b-b*b-5*b;
              return s; }
float mod(float u,float v) {
          float d;
          d=(u-v);
          if(d<=0){d=0-d;}
          return d; }
int main() {
    float a,b;
    int n,i;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%d",&n);
    float x[n],t[n];
    float p;
    p=(b-a)/n;
    x[0]=a;
    x[n]=b;
    for(i=1;i<n;i++) {
           x[i]=a+p; }
    float sum=0;
    for(i=0;i<n;i++) {
           t[i]=mod(f(x[i]),g(x[i]))*p;
           sum=sum+x[i]; }
       printf("%0.4lf",&sum);
	return 0; }