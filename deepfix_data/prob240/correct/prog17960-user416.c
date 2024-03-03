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
	int i,j,n,a[100];
int 	cat(n);
scanf("%d",&n);
	for(i=0;i<n;i++){
	    scanf("%d\n",&a[i]);
	printf("%d\n",cat(i)); }
	return 0; }