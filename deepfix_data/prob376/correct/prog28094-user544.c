#include <stdio.h>
#include <stdlib.h>
    int fact(int n) {
        if(n==0)
        return 1;
        else
        return n*fact(n-1); }
int c(int n){
    return (fact(2*n)/(fact(n)*fact(n)))/(n+1); }
int main() {
	int i,p;
	int a[20];
	scanf("%d\n",&p);
	for(i=0;i<p;i++){
	scanf("%d\n",&a[i]);
    printf("%d\n",c(a[i])); }
	return 0; }