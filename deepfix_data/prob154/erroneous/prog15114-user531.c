#include <stdio.h>
#include <stdlib.h>
int main() {
double f,e,sum,c,a,b,d;
int n;
scanf("%lf%lf%d",&a,&b,&n);
d=(b-a)/n;
c>a&&c<b;
if(c<=-1) {
    f=1; }
if(c>-1&&c<1) {
    f=c*c; }
if(c>=1) {
    f=c*c*c; }
sum=0;
for(i=0;i<n;i++) {
    e=f*d;
    sum=sum+e;
    printf("%lf",sum) }
	return 0; }