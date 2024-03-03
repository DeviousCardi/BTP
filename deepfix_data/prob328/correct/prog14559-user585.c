#include <stdio.h>
#include <stdlib.h>
int f(int n){
    if(n==0)
           return 0;
    if(n==1)
           return 1;
    return f(n-1)+f(n-2); }
int main() {
	int t,i,n,flag=0;
	int k[20];
	scanf("%d\n",&t);
	scanf("%d\n",&k[i]);
	     for(i=0;i<t;i++){
	       for(n=0;n<=6;n++)
	        if(k[i]==f(n))
	          flag=1;}
	        if(flag==1)
	          printf("yes");
	        else
	          printf("no");
	return 0; }