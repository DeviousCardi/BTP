#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
	scanf("%d\n",&n);
	int a[n];
	for (i=0;i<n;i++) {
	    scanf("%d\n",&a[i]); }
	if(a[0]<a[1]){
	 printf("Yes"); }
	else {
	    for(i=1;i<(n-1);i++){
	        if(a[n-1]<a[n-2]){
	            printf("Yes");
	            break; }
	     if((a[i]<a[i+1])&&(a[i]<a[i-1])){
	         printf("Yes");
	         break; } } }
	    if(i==(n-1)){
	    printf("No"); }
	return 0; }