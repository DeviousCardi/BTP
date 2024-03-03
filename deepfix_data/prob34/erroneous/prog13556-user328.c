#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,t,num[20],i,j,p;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&num[i]); }
	scanf("%d",&t);
	for(j=0;j<t;j++) {
	    scanf("%d",&p);
	    if(p>0 && p<t-1) {
	     if (num[p]>=num[p-1] && num[p]<=num[p+1]) {
	        printf("Yes"); }
	     else {
	        printf("No"); } }
	    if(p==0) {
	        if(num[p]>num[p+1]) {
	              printf("Yes"); }
	        else {
	              printf("No"); } }
	    if(p==(t-1)) {
	      if(num[p]>num[p-1]) {
	              printf("Yes"); }
	        else {
	              printf("No"); } } }
	printf("\n"); }
	return 0; }