#include <stdio.h>
#include <stdlib.h>
int main() {
float a,b,sum=0;
int n,k,i,j;
scanf("%f%f%d",&a,&b,&n);
if(b>=a)
k=(b-a)/n;
if(b<-1)
for(i=1;i<=n;i++){
sum=sum+(b-a)/n; }
printf("%.4f",sum);
	return 0; }