#include <stdio.h>
#include <stdlib.h>
int f(int n){
    if(n==0)
           return 0;
    if(n==1)
           return 1;
    return f(n-1)+f(n-2); }
int main() {
	int e=0,t,n,i=0;
	int k;
	scanf("%d",&t);
	    while(i<t){
	        	scanf("%d",&k);
	        for(n=0;n<20;n++){
	            if(k==f(n)) e=1; }
	        if(e)
	          printf("yes\n");
	        else
	          printf("no\n");
	        i++; }
	return 0; }