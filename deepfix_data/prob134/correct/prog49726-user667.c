#include <stdio.h>
#include <stdlib.h>
int B(int ,int );
int main() {
	int n,k,b,flag=0;
	scanf("%d",&b);
	for(k=0;k<=20;k++)
	for(n=k;n<=20;n++) {
	    if(B(n,k)==b) {
	        flag=1;
	        printf("%d %d",n,k);
	        break; } }
	if(!flag)
	 printf("-1");
	return 0; }
int B(int n,int k) {
    if(n<k)
     return 0;
    else if(!n && !k)
     return 1;
    else if(!k)
     return 1;
    else
     return B(n-1,k)+B(n-1,k-1); }