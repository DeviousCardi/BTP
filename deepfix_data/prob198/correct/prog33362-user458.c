#include <stdio.h>
#include <stdlib.h>
int main() {
	int n1,n2,a[n1],b[n2],i,j;
	scanf("%d\n",&n1);
	for(i=0;i<n1;i++){
	    scanf("%d\n",&a[i]); }
	for(i=1;i<n1;i++){
	    if(a[i]>a[i-1]){
	        a[i]=a[i]; }
	    else{a[i]=a[i-1];} }
	for(j=0;j<n2;j++){
	    scanf("%d\n",&b[j]);
	    if(b[j]=a[n1-1]){
	    printf("%d",j);
	    exit(0);} }
	printf("NO");
	return 0; }