#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[10000],mod,max,t,n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	max=0;
	mod=a[0];
	for(i=0;i<n;i++) {
	    t=0;
	    if((a[i]!=a[i+1])&&(i+1<n)) {
	        if(max<1) {
	            max=1;
	            mod=a[i]; } }
	    else {
	        while((a[i]==a[i+1])&&(i+1<n)) {
	            t++;i++; }
	        if(t+1>max) {
	            max=t+1;
	            mod=a[i]; } } }
	printf("%d%d",mod,max);
	return 0; }