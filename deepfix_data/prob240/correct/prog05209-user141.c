#include <stdio.h>
#include <stdlib.h>
int cat(int a) {
    float c;
    int b;
    if (a==0) {
        return 1; }
    else {
        b=2*a-1;
        c=(2.0*b)/a+1;
        return c*cat(a-1); } }
int main() {
	int n;
	scanf("%d",&n);
	int a[n],i,j;
	for(i=0;i<n;i=i+1){
	    scanf("%d",&a[i]); }
	for(i=0;i<n;i=i+1){
	    printf("%d\n",cat(i)); }
	return 0; }