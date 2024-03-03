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
	int j=1;
	if(!(a[0]<a[1])&&!(a[n-2]>a[n-1])) {
	    while(j<n-1) {
	    if((a[j-1]>a[j])&&(a[j]<a[j+1])) {
	        printf("Yes");
	        break; }
	    j++;
	    if(j==n-1) {
	        printf("No"); } } }
	if(n==2&&a[0]!=a[1]){
	    printf("Yes")
	    else if(n==2&&a[0]==a[1]) printf("No"); } }
	return 0; }