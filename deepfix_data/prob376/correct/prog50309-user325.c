#include <stdio.h>
#include <stdlib.h>
int cat(int n){
    int k,a[15];
    if(k>=2){
    for(k=2;k<n;k++){
        a[k]=(n+k)/k;
        a[k]=a[k-1]*a[k-2]; } }
    a[0]=1;a[1]=1;
    return a[n-1]; }
int main() {
	int i,n;
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++){
	    scanf("%d",&a[i]); }
	for(i=0;i<n;i++){
	    b[i]=cat(i); }
	for(i=0;i<n;i++){
	    printf("%d",b[i]); }
	return 0; }