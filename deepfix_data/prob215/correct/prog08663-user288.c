#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,i,s[2000],sum=0;
	scanf("%d",&a);
	for(i=1;i<a;i++){
	    if(a%i==0){
	        sum=sum+i; }
	} if(sum==a){
	    printf("Yes");}
	    else{
	    printf("No"); }
	return 0; }