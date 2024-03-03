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
    int cat;
    if(n==0){
        return 1; }
    else{
        cat=fact(2n)/((fact(n+1))*(fact(n));
        return cat; } }
int main() {
	int t,count,i;
	scanf("%d",&t);
	int a[t];
	for(i=0;i<t;i++){
	    scanf("\n%d",&a[i]); }
	for(i=0;i<t;i++){
	    count=cat(a[i]);
	    printf("%d\n",count); }
	return 0; }