#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[500],b[500];
	int n1,n2,i;
	int c[501];
	scanf("%d\n%d",&n1,&n2);
	for(i=0;i<n1;i++){
    scanf("%d",&a[i]); }
	for(i=0;i<n2;i++) {
	    scanf("%d",&b[i]); }
	for(i=0;i<n1||i<n2;i++) {
	if(a[i]+b[i]<10) {
	    c[i]=a[i]+b[i]; }
	  else {
	      c[i]= (a[i]+b[i])%10;
	  c[i-1]=c[i-1] + 1; }
	printf("%d",c[i]);}
	return 0; }