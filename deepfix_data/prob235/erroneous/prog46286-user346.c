#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	int i,k;
	for(i=n;i>0;i--)
	{  static int j=0;
	   j=j+1;
	    int l=i;
	    for(k=i;k<n+j;k++) {
	        if(l==i){
	        for(l=i;l>1;l--){
	            printf(" ");
	        }}
	            printf("%d",k%10); }
	    printf("\n"); }
	for(j=1;j<(n+1)/2;j++)
	{   k=1;
	    while (k<=j){
	    printf(" ");
	    k++; }
	for(i=2;i<n;i++){
	    printf("%d",i); } }
	return 0; }