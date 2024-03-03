#include <stdio.h>
#include <stdlib.h>
int main() {
double f,sum=0,a,b,d,e;
float c;
int n,i;
scanf("%lf%lf%d",&a,&b,&n);
d=(b-a)/n;
c=a;
if(c>=a&&c<=b) {
if(c<=-1) {
    f=1; }
if(c>-1&&c<1) {
    f=c*c; }
if(c>=1) {
    f=c*c*c; }
for(i=0;i<n;i++) {
    e=f*d;
    sum=sum+e; } }
printf("%0.4lf",sum);
	return 0; }