#include <stdio.h>
#include <stdlib.h>
int  f(int n){
 if(n==0){
 return 0;}
else if(n==1){
    return 1;}
else {
return (f(n-1)+f(n-2)); } }
int main() {
	int t,x,k;
	scanf("%d",&t);
	for(x=1;x<=t;x++){
	    scanf("%d\n",&k);
	f(k);}
	if(k>0){
	    printf("%d\n",f(k-1)); }
	else
 printf("%d",0);
	return 0; }