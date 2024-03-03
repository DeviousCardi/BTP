#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	if(n<20){
	int a[n];
	int i;
	for(i=0;i<n;i++) {
	    int v;
	    scanf("%d",&v);
	    a[i]=v; }
	if((a[0]<a[1])||(a[n-2]>a[n-1])) {
	    printf("Yes"); }
	int j;
	if(!(a[0]<a[1])&&!(a[n-2]>a[n-1])) {
	    for(j=1;j<n-2;j++) {
	    if((a[j-1]>a[j])&&(a[j]<a[j+1])) {
	        printf("Yes");
	        break; }
	    if(j==n-2) {
	        printf("No"); } } } }
	return 0; }