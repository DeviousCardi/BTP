#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,count=0,t,index;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
	   scanf("%d\n",&a[i]); }
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d\n",&index);
	    if(a[index]==a[index+1]){
	   printf("%d\n",a[index]); } }
	return 0; }