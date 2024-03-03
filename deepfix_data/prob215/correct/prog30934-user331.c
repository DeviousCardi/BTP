#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,sum=0;
	scanf("%d",&n);
	if(n>0){
	for(i=1;i<=(n/2);i++){
	    if(n%i==0){
	        sum=sum+i; }
	    else{
	        continue; } } }
	if(sum==n){
	    printf("YES"); }
	else{
	    printf("NO"); }
	return 0; }