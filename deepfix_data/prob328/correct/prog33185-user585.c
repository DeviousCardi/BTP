#include <stdio.h>
#include <stdlib.h>
int f(int n){
    if(n==0)
           return 0;
    if(n==1)
           return 1;
    return f(n-1)+f(n-2); }
int main() {
	int k,n,t,i;
	int s[20];
	scanf("%d",&t);
	scanf("%d",&s[i]);
	     for(i=0;i<t;i++){
	        if(s[i]==f(n))
	          printf("yes");
	        else
	          printf("no");}
	return 0; }