#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,t,num[20],i,j,k,p;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&num[i]); }
	scanf("%d",&t);
	int a[t];
	for(j=0;j<t;j++) {
	    scanf("%d",&p);
	    if(p>0 && p<n-1) {
	     if (num[p]>num[p-1] && num[p]<num[p+1]) {
	        a[j]=1;    printf("y"); }
	     else {
	        a[j]=0; } }
	    else if(p==0) {
	        if(num[p]>num[p+1]) {
	              a[j]=1; }
	        else {
	              a[j]=0; } }
	    else if(p==(n-1)) {
	      if(num[p]>num[p-1]) {
	             a[j]=1; }
	        else {
	             a[j]=0; } } }
	for(k=0;k<t;k++) {
	    if(a[k]==1)
	      printf("Yes");
	    else
	      printf("No");
	  printf("\n"); }
	return 0; }