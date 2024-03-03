#include <stdio.h>
#include <stdlib.h>
int cat(int n){
    int l=0,i;
    if(n==0)
           return 1;
    for(i=0;i<n;i++){
    l=l+cat(i)*cat(n-i-1);}
           return l; }
int main() {
	int e=0,t,n,i=0;
	int k;
	scanf("%d",&t);
	    while(i<t){
	        e=0;
	        	scanf("%d",&k);
	        for(n=0;n<17;n++){
	            if(k==cat(n)) e=1;}
	        if(e==1)
	          printf("yes\n");
	        else
	          printf("no\n");
	        i++; }
	return 0; }