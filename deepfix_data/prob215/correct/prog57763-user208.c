#include <stdio.h>
#include <stdlib.h>
int main() {
	int num,sum,i;
	scanf("%d",&num);
	sum=0;
	for(i=1;i<=(num-1);i++){
	    if(num%i==0){
	        sum=sum+i; } }
	if(sum==num){
	    printf("YES"); }
	else{
	    printf("NO"); }
	return 0; }