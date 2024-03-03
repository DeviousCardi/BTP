#include <stdio.h>
#include <stdlib.h>
int cat(int n){
    if (n==1)
    return 1;
    else if (n>=2)
    return (2*((2*(n-2))+1))*cat(n-1)/n; }
int main() {
	int i,n,m,a[100];
	scanf ("%d",&n);
	for (i=0;i<n;i++){
	    scanf ("%d\n",&a[i]); }
    for (m=1;m<=17;m++){
        for (i=0;i<n;i++){
            if (cat(m)==a[i]){
                printf ("yes\n");
                break; }
            else {
                printf ("no\n"); } } }
	return 0; }