#include <stdio.h>
    int main(void) {
	int x[10000],i,j,n,y[100];
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&x[i]); }
	for(i=0;i<100;i++) {
	    y[i]=0; }
	for(i=0;i<100;i++) {
	    for(j=0;j<n;j++) {
	        if(x[j]==i) {
	            y[i]=y[i]+1; } } }
	for(i=0;i<100;i++) {
	    for(j=0;j<y[i];j++) {
	        if(y[i]!=0) {
	        printf("%d ",i); } } }
	printf("end");
    return 0; }