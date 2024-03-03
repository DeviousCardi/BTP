#include <stdio.h>
#include <stdlib.h>
int main() {
int n,i,j,k,a[n];
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&a[i]); }
for (j=0;j<n;j++){
    int count=0;
for (k=0;k<n-j;k++){
    if ((a[n-j-1])=(a[n-j-1-k])){
    count=count+1; }
    } printf("%d",count); }
	return 0; }