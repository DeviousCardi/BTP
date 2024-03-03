#include <stdio.h>
#include <stdlib.h>
long int fact(int n){
    if(n==0||n==1){
        return 1; }
    else
    return n*fact(n-1); }
 long int catalan(int n) {
    if(n==0){
        return 1; }
    else{
        return fact(2*n)/((fact(n+1))*(fact(n))); } }
int main() {
	int t,i,j,count=0;
	scanf("%d",&t);
	int a[t];
	for(i=0;i<t;i++){
	    scanf("\n%d",&a[i]); }
	for(i=0;i<t;i++){
	    j=1;
	    while(catalan(j)<a[i]){
	        count=count+1;
	        j++; }
	        printf("%ld\n",catalan(count)); }
	return 0; }