#include <stdio.h>
#include <stdlib.h>
int fact(int n){
    int fun;
    if(n==0||n==1){
        return 1; }
    else
    fun=n*fact(n-1);
    return fun; }
int catalan(int n) {
    if(n==0){
        return 1; }
    else{
        return fact(2*n)/((fact(n+1))*(fact(n))); } }
int main() {
	int t,i,j=0,count=0;
	scanf("%d",&t);
	printf("%d",t);
	int a[t];
	for(i=0;i<t;i++){
	    scanf("\n%d",&a[i]);
	    printf("\n%d",a[i]); }
	for(i=0;i<t;i++){
	    while(catalan(j)<=a[i]){
	        count=count+1;
	        printf("%d\n",count);
	        j++; }
	        printf("%d\n",catalan(count-1)); }
	return 0; }