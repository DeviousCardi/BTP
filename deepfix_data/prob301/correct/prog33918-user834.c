#include <stdio.h>
#include <stdlib.h>
int freq(int x[],int s){
 int i;
 int j;
 int count=0;
 for(i=0;i<s;i++){
     for(j=i+1;j<s;j++) {
         if(x[i]==x[j])
         count++; } }
 return count; }
int main() {
	int n;
	printf("%d",&n);
	int a[n];
	int i;
	int y;
	int max;
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	    max=freq(a[0],n);
	  for(i=0;i<n;i++){
	      if(freq(a[i],n)>=max){
	          max=freq(a[i],n);
	          y=i; } }
	  printf("%d",a[y]);
	return 0; }