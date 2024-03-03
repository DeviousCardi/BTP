#include <stdio.h>
#include <stdlib.h>
int main() {
	int j,i,n,mode;
	 scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
	   scanf("%d",&a[i]);
	 for(j=1;j<n;j++){
	 if (a[0]=a[j]) {
	    mode=a[j];
	    printf("%d",mode);
	     break; }
	 if (a[i]=a[j]){
	 mode=a[j];
	 printf("%d",a[j]); } } }
	return 0; }