#include <stdio.h>
#include <stdlib.h>
float catalan(float x) {
    if(x==0){return 1;}
    if(x==1){return 1;}
     return (((2*(2*x-1))/(x+1))*catalan(x-1)); }
int main() {
    int i,t,k;
    float a[t],j,l;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    j=0;
	    scanf("%f", &a[i]);
	   for(k=0;catalan(j);k++) {
	       j=j+1;
	       if((catalan(j)>a[i])&&(catalan(j)==a[i])) {
	           l=catalan(j-1);
	           printf("%.0f\n",l);
	           break; } } }
	return 0; }