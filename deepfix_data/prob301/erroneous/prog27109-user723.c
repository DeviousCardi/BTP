#include <stdio.h>
#include <stdlib.h>
int main() {
    int max(int a,int b){
        if(a>b) return a;
        else return b; }
	int n,i;
	int c[n]=1;
	scanf("%d\n",&n);
	int a[n];
	for(i=0;i<n;i++){
	    scanf("%d",&a[i]); }
	for(i=1;i<n;i++){
	    if(a[i]==a[i-1]){
	        c[i]=c[i]+1; }
	for(i=1;i<n;i++){
	    if(c[i]>=c[i-1]){
	        m=a[i]; }
	    else m=a[i-1]; }
	printf("%d",m;
	return 0; }