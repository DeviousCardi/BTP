#include <stdio.h>
#include <stdlib.h>
int f(int n){
    if(n==0)
           return 0;
    if(n==1)
           return 1;
    return f(n-1)+f(n-2); }
int main() {
	int t,n,m,i=0;
	n<=6,m<=6;
	int k[20];
	scanf("%d\n",&t);
	scanf("%d\n",&k[i]);
	     for(i=0;i<t;i++){
	        if(k[i]==f(n)||k[i]==f(m))
	          printf("yes\n");
	        else
	          printf("no\n");}
	return 0; }