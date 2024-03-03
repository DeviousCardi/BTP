#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
   int cou=0;
	for(j=l;j<r-1;j++) {
	    for(k=j+1;k<r;k++) {
	        if(arr[j]>arr[k])
	        {cou++;} } }
	return cou; }
int main() {
    int n,k,i,j
    scanf("%d%d",&n,&k);
    int h[n-k+1];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    for(i=0;i<=n-k;i++) {
        h[i]=getInversions(i,i+k-1); }
    int ch=h[0];
    for(j=1;j<=n-k;j++) {
        if(ch<h[j]) {
            ch=h[j]; } }
    printf("%d",ch);
    return 0; }