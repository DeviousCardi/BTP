#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,t,index;
	int a[25];
	scanf("%d",&n);
	scanf("%d",&t);
	for(i=0;i<n;i++){
	    scanf("%d",&a[i]); }
	for(i=0;i<t;i++){
	    scanf("%d",&index);
	    if(a[index]>a[index-1] && a[index]>a[index+1]){
	        printf("No\n"); }
	    else{printf("Yes\n");} }
	return 0; }