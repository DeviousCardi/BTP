#include <stdio.h>
#include <stdlib.h>
int main() {
	long int n;
	 long int i,j,k;
	scanf("%ld",&n);
	int *a;
	a=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i=i+1){
	    scanf("%d",(a+i)); }
	if(n==1){
	    printf("1 0"); }
	else{
	  k=0;
	  j=n-1;
	  while(k<n&&j>=0){
	    if(k<j){
	      if(a[k]>a[j]){
	          j--;
	        a[j]=a[j+1]+a[j];
	        printf("%ld %ld\n",k,j); }
	      else if(a[k]<a[j]){
	          k++;
	        a[k]=a[k]+a[k-1];
	        printf("%ld %ld\n",k,j); }
	      else if(a[k]==a[j]){
	          k++;
	        a[k]=a[k]+a[k-1];
	        printf("%ld %ld\n",k,j); } }
	    else{
	        break; } }
	  printf("%ld %ld",i,n-j); }
	return 0; }