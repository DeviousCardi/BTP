#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main() {
	long int n;
	scanf("%ld", &n);
	long int i;
	long int sum;
	sum=0;
	for(i=1; i<n; i++){
	    if((n%i)==0){
	        sum=sum+i;
	    printf("%ld", sum); } }
	if(sum==n){
	    printf("YES"); }
	else{
	    printf("NO"); }
	return 0; }