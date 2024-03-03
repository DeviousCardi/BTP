#include <stdio.h>
#include <stdlib.h>
int bin(int n,int k){
    if(n<k)return 0;
    if((n==0)&&(k==0))return 1;
    if(k==0)return 1;
    return bin(n-1,k)+bin(n-1,k-1); }
int main() {
	printf("%d",bin(3,3));
	return 0; }