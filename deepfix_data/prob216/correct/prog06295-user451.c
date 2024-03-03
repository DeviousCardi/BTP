#include <stdio.h>
#include <stdlib.h>
int  f(int n){
 int first=0,second=1,sum;
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
	    scanf("%d\n",&k); }
f(t);
result=f(k);
printf("%d",result);
	return 0; }