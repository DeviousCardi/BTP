#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d\n",&n);
	int a[10000];
	int i,j;
	for(i=0;i<n;i++) {
	    scanf("%d\n",&a[i]); }
	int s;
	int flag;
	flag=0;
	scanf("%d",&s);
	for(i=0;i<n-1;i++) {
	    for(j=i+1;j<n;j++) {
	        if(a[i]+a[j]==s){
	          printf("(%d,%d)\n",&a[i],&a[j]);
	          flag=1; } } }
     if(flag==0)
      printf("no output");
	return 0; }