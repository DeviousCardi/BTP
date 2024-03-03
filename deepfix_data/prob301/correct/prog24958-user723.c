#include <stdio.h>
#include <stdlib.h>
int main() {
    int max(int a,int b){
        if(a>b) return a;
        else return b; }
	int n,i;
	int c1=1;
	int c2=1;
	scanf("%d\n",&n);
	int a[n];
	for(i=0;i<n;i++){
	    scanf("%d",&a[i]); }
	for(i=1;i<n;i++){
	    if(a[i]==a[i-1]){
	        c2=c2+1; }
	    else{
	        c1=max(c1,c2);
	        c2=1; } }
	return 0; }