#include <stdio.h>
#include <stdlib.h>
int fib(int k){
    if(k==1)
        return 0;
    else if(k==2)
        return 1;
    else return fib(k-1)+fib(k-2); }
int main() {
    int t,k,b,i;
    scanf("%d",&t);
    for(b=0;b<t;b++) {
        scanf("%d",&k);
	    for(i=1;i<21;i++){
	        if(fib(i)==k){
	            printf("yes");
	            break; } }
	    if(i==21){
	        printf("no");
	        break; } }
	return 0; }