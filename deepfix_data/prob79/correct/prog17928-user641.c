#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, *t,s=0,a=0,b=0;
	scanf("%d",&n);
	t = (int*)malloc(n*sizeof(int));
	int i;
	for(i=0;i<n;i++){
	    scanf("%d",&t[i]); }
	for(i=0;i<n;i++){
	    s=s+t[i]; }
	for(i=0;i<n;i++){
	    while((a+b)<=s){
	    if (a>=b) {
	        a=a+t[i]; }
	    if(b>=a) {
	        b=b+t[i];
	    }} }
	printf("%d",i);
	return 0; }