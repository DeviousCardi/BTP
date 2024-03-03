#include <stdio.h>
#include <stdlib.h>
int freq(int x,int s,int y[]){
 int i;
 int count=0;
 for(i=0;i<s;i++){
         if(x==y[i])
         count++; }
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
	    max=freq(a[0],n,a);
	  for(i=0;i<n;i++){
	      if(freq(a[i],n,a)>=max){
	          max=freq(a[i],n,a);
	          y=i; } }
	  printf("%d",a[y]);
	return 0; }