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
        cat=fact(2*n)/((fact(n+1))*(fact(n)));
        return cat; } }
int main() {
	int t,i;
	scanf("%d",&t);
	printf("%d",t);
	int a[t];
	for(i=0;i<t;i++){
	    scanf("\n%d",&a[i]);
	    printf("%d",a[i]); }
	return 0; }