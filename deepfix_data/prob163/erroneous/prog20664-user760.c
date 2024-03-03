#include <stdio.h>
#include <stdlib.h>
int main() {
	int n1,n2,a[501],b[501],sum[501],rem=0,i,max;
	scanf("%d%d",&n1,&n2);
	if(n1>n2){
	    max=n1;}
	else if(n2>n1)
	    max=n2;}
	else if(n1=n2){
	    max=n1+1; }
	for(i=501-n1;i<501;i++){
	    scanf("%1d",&a[i]); }
	for(i=501-n2;i<501;i++){
	    scanf("%1d",&b[i]); }
	for(i=500;i>500-max;i--){
	    sum[i]=((a[i]+b[i])%10) + rem;
	    rem = (a[i]+b[i])/10; }
	for(i=501-max;i<501;i++){
	  printf("%d",sum[i]) ; }
	return 0; }