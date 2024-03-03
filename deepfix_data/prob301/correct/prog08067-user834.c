#include <stdio.h>
#include <stdlib.h>
int max(int x[],int s){
    int j;
    int max=x[0];
    int l;
	        for(j=0;j<s;j++) {
	            if(max<x[j]) {
	                max=x[j];
	                l=j; } }
return l; }
int main() {
	int n;
	printf("%d",&n);
	int a[n];
	int count=0;
	int i;
	int j;
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	    int b[n];
	    for(i=0;i<n;i++){
	        for(j=i+1;j<n;j++){
	            if(a[i]==a[j])
	            count++; }
	    b[i]=count+1; }
	   printf("%d",a[max(b,n)]);
	return 0; }