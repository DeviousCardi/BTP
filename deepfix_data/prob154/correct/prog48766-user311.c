#include <stdio.h>
#include <stdlib.h>
double area (double);
double i,width;
int main() {
	int n ;
	double a,b,ans;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	i=0;
	width = ((b-a)*(1.0))/n;
	for(i=a;i<b;i=i+width) {
	    if(i<=-1){
	       ans=ans + area (1.0);
	    printf(":%lf",ans);}
	    else if(i>-1&&i<1){
	        ans=ans + area (i*i);
	    printf("|%lf",ans);}
	    else if(i>=1){
	        ans=ans + area (i*i*i);
	    printf("?%lf",ans);} }
	printf("%7.4lf",ans);
	return 0; }
double area (double f) {
    int term;
    term = f*width; printf("*");
    return term ; }