#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,i,j,k,l;
	scanf("%d\n%d\n",&a,&b);
	int x[a];
	int y[b];
	for(i=0; i<a; i++) {
	    scanf("%d\n",&x[i]); }
	for(j=0; j<b; j++) {
	    scanf("%d\n",&y[i]); }
	if(a>b) {
	    int sum[a+1];
	    for(k=0; k<=a; k++) {
	        sum[k]=(x[k]+y[k]);
	        if(sum[k]>10) {
	            sum[k+1]=sum[k+1]+1;
	            sum[k]=sum[k]%10; }
	        printf("%d",sum[k]); } }
	else {
	    int sum[b+1];
	    for(l=0; l<=b; l++) {
	        sum[l]=x[l]+y[l];
	        if(sum[l]>10) {
	            sum[l+1]=sum[l+1]+1;
	            sum[l]=sum[l]%10; }
	        printf("%d",sum[l]); } }
	return 0; }