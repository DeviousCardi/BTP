#include <stdio.h>
#include <stdlib.h>
int l=1;
int cat(int n){
    int i=0;
    int a=(n+i)/i;
    if(i<n) {
        i++;
        return cat(i); }
    else return a; }
int main() {
	int i,n;
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++){
	    scanf("\n%d\n",&a[i]); }
	for(i=0;i<n;i++){
	    b[i]=cat(i); }
	for(i=0;i<n;i++){
	    printf("%d\n",b[i]); }
	return 0; }