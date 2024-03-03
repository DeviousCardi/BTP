#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
	int a[20];
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    scanf("%d",&a[i]); }
	if(n==1) {
	      printf("Yes"); }
	    else if(i==0) {
	        if(a[1]<a[0]){
	           printf("Yes\n"); }
	        else {
	            printf("No\n"); } }
	    else if(i ==n-1){
	        if(a[i]>a[n-2]){
	           printf("Yes\n"); }
	        else {
	            printf("No\n"); } }
	    else if(a[i]>a[i-1] && a[i]>a[i+1]){
	        printf("Yes\n"); }
	    else{
	        printf("No\n"); }
	return 0; }