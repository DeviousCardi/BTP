#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,index;
	scanf("%d",&n);
	int a[n];
	if(n==1){
	   printf("%d",n); }
	for(i=1;i<n;i++){
	    scanf("%d",&a[i]);
	    scanf("%d",&index); }
	 if((a[index]==a[index+1])|| (a[index]==a[index+2])){
	       printf("%d",a[index]); }
     else{ }
	return 0; }