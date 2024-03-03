#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	int a[n]; int i,j;
	for(i=0;i<n;i++) {
	    scanf("%d",a[i]); }
	int flag=0;
	if(n==1) {
	    printf("Yes"); }
	else {
	   for(j=0;j<n;j++) {
	       if(j==0) {
	           if(a[0]<a[1]) {
	               flag+=1; } }
	       else if(j==n-1) {
	           if(a[n-1]<a[n-2]) {
	               flag+=1; } }
	       else {
	           if(a[j]<a[j-1]&&a[j]<a[j+1]) {
	               flag+=1; } } } }
	if(flag>0) {
	    printf("Yes\n"); }
	else {
	    printf("No\n"); }
	return 0; }