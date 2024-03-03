#include <stdio.h>
#include <stdlib.h>
long int ans[10000], k=0;
void store(long int i1, long int i2){
    ans[k] = i1;
    ans[k+1] = i2;
    ans[k+2] = '\0';
    k= k+2; }
int main() {
	long int i, j, n;
	scanf("%ld", &n);
	long int a[n], s;
	for(i=0; i<n; i++){
	    scanf("%ld", &a[i]); }
	scanf("%ld", &s);
	for(i=0; i<n-1; i++){
	    for(j=i+1; j<n; j++){
	        if(a[i]+a[j]==s){
	            store(i,j); } } }
	for(i=0; ans[i]!='\0'; i=i+2){
	    printf("(%ld,%ld)\n", ans[i], ans[i+1]); }
	return 0; }