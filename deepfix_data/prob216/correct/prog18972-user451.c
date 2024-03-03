#include <stdio.h>
#include <stdlib.h>
void printfibonacci(int n){
 int first=0,second=1,sum;
 if(n>0){
     sum=first+second;
     first=second;
     second=sum;
     return printfibonacci(n-1); } }
int main() {
	int t,x,k;
	scanf("%d",&t);
	for(x=0;x<t;x++){
	    scanf("%d\n",&k); }
int i=0,j=1;
printfibonacci(t);
	return 0; }