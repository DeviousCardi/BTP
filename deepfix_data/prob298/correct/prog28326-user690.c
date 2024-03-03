#include <stdio.h>
#include <stdlib.h>
int cat(int n)
{int i=0;
   if (n==0){
       return 1; }
int sum=0;
for (i=0;i<n;i++){
  sum=sum+ cat(i)*cat(n-i-1); }
  return sum; }
int main() {
	int t,i,n=0,count=0;
	scanf("%d",&t);
	int arr[t];
	for (i=0;i<t;i++){
	    scanf("%d",&arr[i]); }
	for (i=0;i<t;i++){
	    while (n<15){
	         if(arr[i]==cat(n)){
	            printf("yes\n");
	            count++;
	            break; }
	        n++; }
	    if (count==0){
	        printf("no\n"); }
	    n=0;
	    count=0; }
	return 0; }