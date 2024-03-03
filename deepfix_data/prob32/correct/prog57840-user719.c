#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,a[20],v;
	v=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	scanf("%d",&a[i]); }
	for(i=0;i<n;i++){
	if((a[i]<a[i-1]&&a[i]<a[i+1])||a[0]<a[1]||a[n-1]<a[n-2]){
	v=1;
	break; } }
	if(v==1){
	    printf("Yes"); }
	else{
	    printf("No"); }
	return 0; }