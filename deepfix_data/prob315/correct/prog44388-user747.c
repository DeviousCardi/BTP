#include <stdio.h>
#include <stdlib.h>
int main() {
	int i=0,j=0,n,k=0;
	int count=0;
	int ie;
	int a[1000];
	scanf("%d\n",&n);
	for(k=0;k<n;k++){
	    scanf("%d",&a[i]); }
	for(i=0;i<n;i++){
	for(j=0;j<n;j++){
	if(a[i]>a[j] && i<j){
	    count=count+1; }
	    else{
	    count=0; }
	    printf("%d\n",count); } }
	return 0; }