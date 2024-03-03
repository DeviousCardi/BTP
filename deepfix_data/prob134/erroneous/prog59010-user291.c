#include <stdio.h>
#include <stdlib.h>
int bino(int a,int b) {
    if(n<k)
    return 0;
    else if(n==0&&k==0)
    return 1;
    else if(k==0)
    return 1;
    else
    return bino(n-1,k)+bino(n-1,k-1); }
int main() {
	int b,i,j;
	scanf("%d",&b);
	for(i=0;i<=20;i++) {
	    for(j=0;j<=20;j++) {
	        if(bino(i,j)==b) {
	            printf("%d ",i);
	            printf("%d",j);
	            return 0; } } }
	return 0; }