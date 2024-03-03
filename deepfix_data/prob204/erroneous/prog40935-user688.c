#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int num_from_digits(int a[],int n){
    int i, N=0;
    for(i=0; i<n; i++){
        N=N+ a[i]*pow(10, n-1-i); }
    return N; }
int main() {
	int a[100], i, count=0;
	int b[i];
	int x=getchar();
	for(i=0; x!=EOF; i++){
	    a[i]=x;
	    x=getchar();
	    count++; }
	for(i=0; i<count; i++){
	    b[i]=a[i]; }
	printf("%d",num_from_digits(b,count);
	return 0; }