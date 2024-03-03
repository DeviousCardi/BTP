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
	  i=0;
	  j=n-1;
	  while(i<n&&j>=0){
	    if(i<j){
	      if(a[i]>a[j]){
	        a[j-1]=a[j]+a[j-1];
	        j--;
	        printf("%ld %ld\n",i,j); }
	      else if(a[i]<a[j]){
	         a[i+1]=a[i]+a[i+1];
	         i++;
	         printf("%ld %ld\n",i,j); }
	      else if(a[i]==a[j]){
	          i++;
	        a[i]=a[i]+a[i-1];
	        printf("%ld %ld\n",i,j); } }
	    else{
	        break; } }
	  printf("%ld %ld",i,n-j);
	return 0; }