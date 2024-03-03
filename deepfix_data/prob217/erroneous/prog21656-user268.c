#include <stdio.h>
#include <stdlib.h>
int main() {
 int n;
 int i,j,s;
	scanf("%d\n",&n);
	int a[n];               \*defining araay*\
	for(i=0;i<n;i++){                   \\initialisation of array
	    scanf("%d",&a[i]); }
	scanf("%d",&s);                  \\finding pair matching sum
	for(i=0;i<n;i++){
	    for(j=i+1;j<n;j++){
	        if(a[i]+a[j]==s){
	       printf("(%d,%d)\n",a[i],a[j]); } } }
	return 0; }