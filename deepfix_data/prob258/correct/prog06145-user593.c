#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,j=1;
	int x[20];
	scanf("%d\n",&n);
	for(i=0;i<n;i++)   {
	    scanf("%d\n",&x[i]); }
	for(i=0;i<n;i++){
	    if(((x[i]<x[i+1])&&(x[i]>x[i-1]))||(x[0]<x[1])){
	        j=0; }
	 if(j==0){
	    printf("Yes\n"); }
	    else {
	    printf("No\n"); } }
	return 0; }