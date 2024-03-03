#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,c=0,s=0;
	scanf("%d",&n);
	int a[n],k=0,b[n];
	for(int i=0;i<n;i++){
	    scanf("%d",&a[i]); }
	for(int i=0;i<n;i++){
	    c=0;
	    for(int j=i;j<n;j++){
	       if(a[i]>a[j]){
	        c++;s++; } }
	    b[i]=c; }
	printf("\n%d",s);
	for(int i=0;i<n;i++){
	    printf("%d ",b[i]); }
	return 0; }