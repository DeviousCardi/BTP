#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	double a,b;
	scanf("%lf%lf%d",&a,&b,&n);
	int k;
	k=(b-a)/n;
	double s[n],result=0;
	int i,j;
	for(i=0;i<n;i=i+1){
	    s[i]=a+(i)*(k); }
	for(j=0;j<n;j=j+1){
	    if(s[j]<=(-1){
       result=result+1*k;}
	  else if(s[j]>(-1)&&s[j]<1){
	            result=result+pow(s[j],2);}
	            else result=result+pow(s[j],3);
	       }}
	{printf("%lf",result); }
	return 0; }