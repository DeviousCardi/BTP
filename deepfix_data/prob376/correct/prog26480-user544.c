#include <stdio.h>
#include <stdlib.h>
    int fact(int n) {
        if(n==0)
        return 1;
        else
        return n*fact(n-1); }
int cat(int n){
    return fact(2*n)/(fact(n+1)*fact(n)); }
int main() {
	int i,p;
	int a[20];
	scanf("%d\n",&p);
	for(i=0;i<20;i++){
	scanf("%d\n",&a[i]);
    printf("%d\n",cat(a[i])); }
	return 0; }