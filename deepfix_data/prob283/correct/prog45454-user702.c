#include <stdio.h>
#include <stdlib.h>
int A(int m,int n){
    if(m==0) return n+1;
    else if((m>0)&&(n=0)) return A(m-1,1);
    else return A(m-1,A(n,n-1)); }
int main() {
	int k;
	scanf("%d",&k);
	int i,j;
	return 0; }