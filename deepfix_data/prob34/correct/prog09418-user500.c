#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int n,i,t,index,max;
	int a[25];
	scanf("%d",&n);
	scanf("%d",&t);
	for(i=0;i<n;i++){
	    scanf("%d",&a[i]); }
	for(i=0;i<t;i++){
	    scanf("%d",&index);
	    if(a[index]!=max){
	        printf("No\n"); }
	    else{printf("Yes\n");} }
	return 0; }