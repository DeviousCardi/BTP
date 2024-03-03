#include <stdio.h>
#include <stdlib.h>
int fibbo(int n) {
    int a=0,b=1,temp,j;
    if(n<=1)
       return n;
    for(j=0;j<=n;j++) {
        temp=a+b;
        a=b;
        b=temp; }
    return temp; }
int main() {
	int i,t,k,fibbo[1000000];
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&k);
	    if(k==0 || k==1) {
	        printf("yes"); }
	   else {
	     if(fibbo[k]==k)
	     printf("yes\n");
	     else
	     printf("no\n"); } }
	return 0; }