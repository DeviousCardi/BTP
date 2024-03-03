#include <stdio.h>
#include <stdlib.h>
int main() {
	long int n;
	 long int i,j;
	scanf("%ld",&n);
	int *a;
	a=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i=i+1){
	    scanf("%d",(a+i)); }
	if(n==1){
	    printf("1 0"); }
	else{
	  i=0;
	  j=n-1;
	  while(i<n&&j>=0){
	    if(i<j){
	      if(a[i]>a[j]){
	        a[j-1]=a[j]+a[j-1];
	        if(i!=j-1){
	        j--; }
	        else{
	            break; } }
	      else if(a[i]<a[j]){
	          i++;
	         a[i]=a[i]+a[i-1]; }
	      else if(a[i]==a[j]){
	          i++;
	        a[i]=a[i]+a[i-1]; } }
	    else{
	        break; } }
	  printf("%ld %ld",i,n-j); }
	return 0; }