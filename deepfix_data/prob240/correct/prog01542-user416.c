#include <stdio.h>
#include <stdlib.h>
int cat(int n){
    int i,c=0;
    if(n<=1)
    return 1;
    else{
    for(i=0;i<n;i++){
        c=c+cat(i)*cat(n-i-1); }
    return c; } }
int main() {
	int i,n,t,j;
    scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d\n",&t);
	   for(j=0;j<100;j++) {
	       if(t<cat(i)) {
	           printf("%d",cat(i-1));
	           break; } } }
	return 0; }