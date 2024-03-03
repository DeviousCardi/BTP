#include <stdio.h>
#include <stdlib.h>
int  f(int n){
 if(n==0){
 return 0;}
else if(n==1){
    return 1;}
else {
return f(n-1)+f(n-2); } }
int main() {
	int t,x,k,result;
	scanf("%d",&t);
	for(x=0;x<t;x++){
	    scanf("%d",&k); }
 f(t);
result=f(k-1);
printf("%d",result);
	return 0; }