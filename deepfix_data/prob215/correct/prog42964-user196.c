#include <stdio.h>
#include <stdlib.h>
int main() {
 long int n,i, sum=0;
	scanf("%d",&n);
	if(n%2==0) {
	    for(i=1;i<=n/2;i++) {
	        if(n%i==0) {
	            sum=sum+i; } } }
	else{
	    for(i=1;i<=(n+1)/2; i++) {
	       if(n%i==0) {
	            sum=sum+i; } } }
	if(sum==n) {
	    printf("YES"); }
	else {
	    printf("NO"); }
	return 0; }