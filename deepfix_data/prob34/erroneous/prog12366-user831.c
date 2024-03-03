#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,a[20],t;
	scanf("%d",&n);
	for(i=0; i<n; i++) {
	    scanf("%d",&a[i]); }
	scanf("%d",&t);
	for(i=0; i<t; i++) {
	    scanf("%d",&index);}
	 if(n>1){
	     if(index==0&&a[index]>a[index+1])
	     printf("Yes");
	     else if(index==(n-1)&&a[index]>a[index-1])
	     printf("Yes");
	     else if((index>0&&index<(n-1))&&a[index]>a[index-1]&&a[index]>a[index+1])
	     printf("Yes");
	     else
	     printf("No") }
	  else{
	      printf("Yes");}
	return 0; }