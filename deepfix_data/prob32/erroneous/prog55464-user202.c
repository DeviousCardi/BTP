#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,a[20],f=0;
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
	    scanf("%d\n",&a[i]); }
	if(n==1){
	    f=1; }
	else if(n==2){
	    if(a[0]!=a[1]){
	        f=1; } }
	else{
	    if(a[0]<a[1]){  f=1;  }
	    else if(a[n-1]<a[n-2]){  f=1;  }
	    else{
	        for(i=1;i<n-1;i++){
	            if(a[i]<a[i-1] && a[i]<a[i+1]){
    	            f=1;
	                break; } } }
	if(f==1){
	    printf("Yes"); }
	else{
	    printf("No"); }
	return 0; }