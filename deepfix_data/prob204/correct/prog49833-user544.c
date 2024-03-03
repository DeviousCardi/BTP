#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,a[20],j;
	 scanf("%d",&n);
	 for(i=0;i<100;i++){
	    scanf("%d",&a[i]); }
	 for(j=1;i<100;j++){
	   if(a[j]=a[n-j]){
	     printf("YES"); }
	   else {
	      printf("NO"); } }
	return 0; }