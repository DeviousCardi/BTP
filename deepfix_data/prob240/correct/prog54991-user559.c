#include <stdio.h>
#include <stdlib.h>
 long int catalan(int n) {
    if(n==0){
        return 1; }
    else{
        return 2*(2*n+1)*catalan(n-1)/(n+2); } }
int main() {
	int t,i,j,count;
	scanf("%d",&t);
	int a[t];
	for(i=0;i<t;i++){
	    scanf("%d",&a[i]); }
	for(i=0;i<t;i++){
	    j=0;
	    count=0;
	    while(catalan(j)<a[i]){
	        count=count+1;
	        j++; }
	        printf("%ld\n",catalan(count-1)); }
	return 0; }