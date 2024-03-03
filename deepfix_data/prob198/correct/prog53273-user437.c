#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,i,j,count=0;
	int a[i],b[j];
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
	    scanf("%d\n",&a[i]); }
	scanf("%d\n",&m);
	for(j=0;j<m;j++){
	    scanf("%d\n",&b[j]); }
	for(i=1;i<n;i++){
	    if(a[i]<=a[0]){
	        a[0]=a[i]; } }
	    for(j=0;j<m;j++){
	        if(b[j]==a[0]){
	            count=count+1; } }
	  	if(count==0){
	    printf("%d",a[0]); }
	else{
	    printf("NO"); }
	return 0; }