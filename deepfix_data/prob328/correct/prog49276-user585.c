#include <stdio.h>
#include <stdlib.h>
int f(int n){
    if(n==0)
           return 0;
    if(n==1)
           return 1;
    return f(n-1)+f(n-2); }
int main() {
	int t,n,i=0;
	int k[20];
	scanf("%d\n",&t);
	scanf("%d\n",&k[i]);
	    while(i<t){
	        if(k[i]==f(n)){
	          printf("yes\n");continue;}
	        else
	          printf("no\n");continue;
	        i++; }
	return 0; }