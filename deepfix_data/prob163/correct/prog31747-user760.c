#include <stdio.h>
#include <stdlib.h>
int main() {
	int n1,n2,a[501],b[501],sum[501],rem=0,i,max;
	scanf("%d%d",&n1,&n2);
	if(n1>=n2){
	    max=n1;}
	else{
	    max=n2;}
	for(i=501-n1;i<501;i++){
	    scanf("%d",&a[i]);
	    printf("%da",a[i]); }
	for(i=501-n2;i<501;i++){
	    scanf("%d",&b[i]);
	    printf("%db",b[i]); }
	for(i=500;i<500-max;i--){
	    sum[i]=(a[i]+b[i])%10 + rem;
	    rem = (a[i]+b[i])/10; }
	for(i=0;i<500-max;i++){ }
	return 0; }