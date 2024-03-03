#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,j,temp;
	scanf("%d",&n);
	int a[n];
	   for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	   if(n==1) {
	     printf("Yes"); }
	   if(n!=1) {
	     if((i>0)&&(i<(n-1))) {
	      for(i=1;i<(n-1);i++) {
	            if((a[i]>a[i-1])&&(a[i]>a[i+1])) {
	                  printf("Yes");
	                  temp=0;
	                  break; }
	           else if((a[i]<a[i-1])&&(a[i]<a[i+1])) {
	                     temp=1;
	                     continue; } } }
         if(i==0) {
             if(a[0]>a[1])
             printf("Yes"); }
         if(i==(n-1)) {
             if(a[n-1]>a[n-2])
             printf("Yes"); }
         if(temp==1) {
              printf("No"); } }
	   return 0; }